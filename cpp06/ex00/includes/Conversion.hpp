/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:46:27 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/27 13:39:18 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H

# include <iostream>
# include <string>
# include <limits>

class Conversion {

public:

	Conversion(void);
	Conversion(char *input);
	Conversion(const Conversion &other);
	~Conversion(void);

	Conversion	&operator=(const Conversion &other);

	void		printInf(std::ostream &out) const;
	void		printChar(std::ostream &out) const;
	void		printInt(std::ostream &out) const;
	void		printFloat(std::ostream &out) const;
	void		printDouble(std::ostream &out) const;

	bool		getIsInf(void) const;
	bool		getInputValid(void) const;

private:

	void	checkInput(char *input);
	int		checkForInf(char *input);

	void	convertChar(char *input);
	void	convertInt(char *input);
	void	convertFloat(char *input);
	void	convertDouble(void);

	bool		_isNum;
	bool		_isFrac;
	bool		_isInf;
	bool		_isDouble;
	bool		_isFloat;
	bool		_isInt;
	bool		_isChar;
	bool		_inputValid;

	std::string	_inf;

	char		_char;
	int			_int;
	float		_float;
	double		_double;

};

std::ostream	&operator<<(std::ostream &out, const Conversion &con);

#endif
