/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:00:02 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/26 17:08:48 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string		buf;
	std::string		name;
	std::fstream	file(argv[1]);
	int				pos;

	if (argc != 4)
		std::cerr << "Error: invalid arguments." << std::endl;
	else if (!std::string(argv[2]).compare(""))
		std::cerr << "Error: empty search string." << std::endl;
	else if (file.is_open())
	{
		name = std::string(argv[1]).append(".replace");
		std::ofstream	newFile (name);
		while (std::getline(file, buf))
		{
			pos = buf.find(argv[2]);
			while (pos != -1)
			{
				buf.erase(pos, strlen(argv[2]));
				buf.insert(pos, argv[3]);
				pos = buf.find(argv[2], pos + strlen(argv[3]));
			}
			newFile << buf << std::endl;
		}
	}
	else
		std::cerr << "Error: invalid file." << std::endl;
	return (0);
}
