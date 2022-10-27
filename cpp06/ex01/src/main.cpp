/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:05:32 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/27 15:48:11 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serialize.hpp"

int	main(void)
{
	Serialize	serializer;
	Data		data;
	uintptr_t	uintptr;

	std::cout << std::endl;
	data.num = 42;
	data.str = "Hello 42!";
	std::cout << "Data addess:      " << &data << std::endl;
	std::cout << "Num from data:    " << data.num << std::endl;
	std::cout << "Str from data:    " << data.str << std::endl;
	std::cout << std::endl;
	uintptr = serializer.serialize(&data);
	std::cout << std::endl;
	std::cout << "Uintptr:          " << uintptr << std::endl;
	std::cout << std::endl;
	Data	*newData = serializer.deserialize(uintptr);
	std::cout << std::endl;
	std::cout << "NewData addess:   " << newData << std::endl;
	std::cout << "Num from newData: " << newData->num << std::endl;
	std::cout << "Str from newData: " << newData->str << std::endl;
	std::cout << std::endl;
	return (0);
}
