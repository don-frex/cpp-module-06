/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:23:40 by asaber            #+#    #+#             */
/*   Updated: 2024/04/01 17:42:03 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &other);
		~ScalarConverter();
		ScalarConverter &operator=(ScalarConverter const &other);
	public:
		static void convert(std::string input);
};
#endif