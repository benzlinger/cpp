/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:00:02 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/04 17:39:02 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int	main(int argc, char **argv)
{
	std::string			buf;
	std::string			name;
	std::fstream		file(argv[1]);
	std::stringstream	buffer;
	int					pos;

	if (argc != 4)
		std::cerr << "Error: invalid arguments." << std::endl;
	else if (!std::string(argv[2]).compare(""))
		std::cerr << "Error: empty search string." << std::endl;
	else if (file.is_open())
	{
		std::string	to_change = argv[2];
		name = std::string(argv[1]).append(".replace");
		std::ofstream	newFile(name);
		buffer << file.rdbuf();
		buf = buffer.str();
		pos = buf.find(argv[2]);
		while (pos != -1)
		{
			buf.erase(pos, to_change.length());
			buf.insert(pos, argv[3]);
			pos = buf.find(argv[2], pos + strlen(argv[3]));
		}
		newFile << buf;
	}
	else
		std::cerr << "Error: invalid file." << std::endl;
	return (0);
}
