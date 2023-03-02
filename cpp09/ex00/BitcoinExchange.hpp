/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:10:04 by btenzlin          #+#    #+#             */
/*   Updated: 2023/03/02 16:05:57 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <map>
# include <sstream>
# include <fstream>
# include <string>
# include <cstring>
# include <iostream>

class BitcoinExchange {

public:

	BitcoinExchange(void);
	BitcoinExchange(std::string path);
	BitcoinExchange(const BitcoinExchange &other);
	~BitcoinExchange(void);

	BitcoinExchange					&operator=(const BitcoinExchange &other);

	void							calc_value(std::string date, float value);

	std::map<std::string, float>	get_data(void);

private:

	std::map<std::string, float>	data;

};
