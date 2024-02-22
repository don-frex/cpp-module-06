/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:12:49 by asaber            #+#    #+#             */
/*   Updated: 2024/02/19 23:13:06 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int	main()
{
	Serializer s;
	Data d;
	d.your_data = "Hello, World!";
	uintptr_t ptr = s.serialize(&d);
	Data* d2 = s.deserialize(ptr);
	std::cout << d2->your_data << std::endl;
	return 0;
}