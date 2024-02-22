/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:10:42 by asaber            #+#    #+#             */
/*   Updated: 2024/02/19 23:12:12 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include "Data.hpp"

class Serializer
{
public:
	Serializer();
	Serializer(Serializer const &other);
	~Serializer();
	Serializer& operator=(Serializer const &other);
	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);
};

#endif