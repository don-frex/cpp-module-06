/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 19:26:29 by asaber            #+#    #+#             */
/*   Updated: 2024/02/14 23:12:17 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	
}

ScalarConverter::ScalarConverter(ScalarConverter const &other)
{
	(void) other;
}

ScalarConverter::~ScalarConverter()
{
	
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const &other)
{
		(void) other;
		return *this;
}


bool ifisChar(std::string input)
{
	
	if (input.length() == 1)
		return true;
	return false;
}
bool ifisInt(std::string input)
{
	size_t start;

	start = (input[0] == '-' || input[0] == '+') ? 1 : 0;
	for(size_t i = start; i < input.length(); i++)
		if (!isdigit(input[i]))
			return false;
	return (true);
}

bool ifisFloat(std::string input, char check)
{
	char *endp;
	std::strtod(input.c_str(), &endp);
	if (check == 'f' ?(!*endp || (*endp == 'f' && strlen(endp) == 1)):!*endp)
		return true;
	return false;
}

int pars_n_checkType(std::string input)
{
	if (ifisChar(input))
		return 1;
	else if (ifisInt(input))
		return 2;
	else if (ifisFloat(input, 'd'))
		return 4;
	else if (ifisFloat(input, 'f'))
		return 3;
	return (0);
}

void cnvChar(std::string input)
{
	char c = input[0];
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void ScalarConverter::convert(std::string input)
{
	size_t type = pars_n_checkType(input);
	switch (type)
	{
		case 0:
		{
			std::cout << "sir f7alk ^_^" << std::endl;
			break;
		}
		case 1:
		{
			cnvChar(input);
			break;
		}
	}
}