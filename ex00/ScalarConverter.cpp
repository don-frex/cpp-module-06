/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 19:26:29 by asaber            #+#    #+#             */
/*   Updated: 2024/02/15 20:02:23 by asaber           ###   ########.fr       */
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
	
	if (input.length() == 1 && !isdigit(input[0]))
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
void cnvInt(std::string input)
{
	int i = std::stoi(input);
	std::cout << "char: ";
	if (i >= 32 && i != 127 && i <= 255)
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	else if ((i >= 0 && i <= 31) || (int)i == 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void	cnvFloat(std::string input)
{
	float f = std::stof(input);
	std::cout << "char: ";
	if (f >= 32 && (int)f != 127 && f <= 255)
		std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
	else if (f >= 0 && f <= 31 && (int)f == 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: ";
	if (f >= std::numeric_limits<int>::min() && f <= std::numeric_limits<int>::max())
		std::cout << static_cast<int>(f) << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void cnvDouble(std::string input)
{
	double d = std::stod(input);
	std::cout << "char: ";
	if (d >= 32 && (int)d != 127 && d <= 255)
		std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
	else if (d >= 0 && d <= 31 && (int)d == 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: ";
	if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max())
		std::cout << static_cast<int>(d) << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
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
		case 2:
		{
			cnvInt(input);
			break;
		}
		case 3:
		{
			cnvFloat(input);
			break;
		}
		case 4:
		{
			cnvDouble(input);
			break;
		}
	}
}