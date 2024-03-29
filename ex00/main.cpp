/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:20:33 by asaber            #+#    #+#             */
/*   Updated: 2024/02/11 21:56:13 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

bool isNonPrintible(std::string str)
{
	for(int i = 0; str[i]; i++)
	{
		if (!std::isprint(str[i]) || str[i] == ' ')
			return true;
	}
	return false;
}


int main(int ac, char **av)
{
	ScalarConverter ob;

	if (ac == 2 && std::strlen(av[1]) && !isNonPrintible(av[1]))
		ob.convert(av[1]);
	else
		std::cout << "error in passing arguments please try again!!." << std::endl;
	return 0;
}