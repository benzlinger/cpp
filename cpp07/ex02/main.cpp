/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:23:20 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/28 14:46:47 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	std::cout << "----ARRAY TEMPLATE TESTS----" << std::endl << std::endl;
	{
		try {
		std::cout << "----EMPTY ARRAY TESTS----" << std::endl;
		Array<int>	array1;

		std::cout << "Size array1: " << array1.size() << std::endl;
		std::cout << array1;
		std::cout << std::endl << "Copy constructor on emtpy array1" << std::endl;
		Array<int>	array2(array1);
		std::cout << "Size array2: " << array2.size() << std::endl;
		std::cout << array2;
		std::cout << std::endl << "Accessing empty array1" << std::endl;
		array1[1] = 2;
		} catch (std::exception &e) {
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
		std::cout << "----ARRAY TEST with chars----" << std::endl << std::endl;
		Array<char>	array1(5);


		std::cout << "Filling array1 with a, b, c, d, e" << std::endl;
		array1[0] = 'a';
		array1[1] = 'b';
		array1[2] = 'c';
		array1[3] = 'd';
		array1[4] = 'e';
		std::cout << "Size array1: " << array1.size() << std::endl;
		std::cout << array1;
		std::cout << std::endl << "Copy constructor on array1" << std::endl;
		Array<char>	array2(array1);
		// std::cout << std::endl << "Copy assignment on array1" << std::endl;
		// Array<char>	array2 = array1;
		std::cout << "Size array2: " << array2.size() << std::endl;
		std::cout << array2;
		std::cout << std::endl << "Changing array1 at index 2" << std::endl;
		array1[2] = 'Z';
		std::cout << "Array1: " << array1;
		std::cout << "Array2: " << array2;
		std::cout << std::endl << "Accessing array1 at index 2" << std::endl;
		std::cout << array1[2] << std::endl;
		std::cout << std::endl << "Accessing array1 at index -3 (out of bounds)" << std::endl;
		std::cout << array1[-3] << std::endl;
		} catch (std::exception &e) {
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
		std::cout << "----ARRAY TEST with ints----" << std::endl << std::endl;
		Array<int>	array1(5);


		std::cout << "Filling array1 with 1, 2, 3, 4, 5" << std::endl;
		array1[0] = 1;
		array1[1] = 2;
		array1[2] = 3;
		array1[3] = 4;
		array1[4] = 5;
		std::cout << "Size array1: " << array1.size() << std::endl;
		std::cout << array1;
		std::cout << std::endl << "Copy constructor on array1" << std::endl;
		Array<int>	array2(array1);
		// std::cout << std::endl << "Copy assignment on array1" << std::endl;
		// Array<int>	array2 = array1;
		std::cout << "Size array2: " << array2.size() << std::endl;
		std::cout << array2;
		std::cout << std::endl << "Changing array1 at index 2" << std::endl;
		array1[2] = 42;
		std::cout << "Array1: " << array1;
		std::cout << "Array2: " << array2;
		std::cout << std::endl << "Accessing array1 at index 0" << std::endl;
		std::cout << array1[0] << std::endl;
		std::cout << std::endl << "Accessing array1 at index -3 (out of bounds)" << std::endl;
		std::cout << array1[-3] << std::endl;
		} catch (std::exception &e) {
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}
	return (0);
}
