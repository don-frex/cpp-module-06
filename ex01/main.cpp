/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:12:49 by asaber            #+#    #+#             */
/*   Updated: 2024/04/01 18:02:00 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int	main()
{
	Data d;
	d.your_data = "Hello, World!";
	uintptr_t ptr = Serializer::serialize(&d);
	Data* d2 = Serializer::deserialize(ptr);
	std::cout << d2->your_data << std::endl;
	return 0;
}