/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:48:30 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/27 14:14:56 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Conversion.hpp"

Conversion::Conversion(void)
{
	std::cout << "Conversion default constructor called" << std::endl;
}

Conversion::Conversion(char *input) :
_isNum(false), _isFrac(false), _isInf(false), _isDouble(false), _isFloat(false), _isInt(false), _isChar(false), _inputValid(true)
{
	std::cout << "Conversion input constructor called" << std::endl;
	checkInput(input);
	if (_isInf)
		return ;
	else if (_isChar)
		convertChar(input);
	else if (_isInt)
		convertInt(input);
	else if (_isFloat)
		convertFloat(input);
	else if (_isDouble)
		convertDouble();
	else
		_inputValid = false;
}

Conversion::Conversion(const Conversion &other)
{
	std::cout << "Conversion copy constructor called" << std::endl;
	*this = other;
}

Conversion::~Conversion(void)
{
	std::cout << "Conversion destructor called" << std::endl;
}

Conversion	&Conversion::operator=(const Conversion &other)
{
	std::cout << "Conversion copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_char = other._char;
		_int = other._int;
		_float = other._float;
		_double = other._double;

		_inf = other._inf;

		_isNum = other._isNum;
		_isFrac = other._isFrac;
		_isInf = other._isInf;
		_isDouble = other._isDouble;
		_isFloat = other._isFloat;
		_isInt = other._isInt;
		_isChar = other._isChar;
		_inputValid = other._inputValid;
	}
	return (*this);
}

void		Conversion::convertChar(char *input)
{
	_char = input[0];
	_int = static_cast<int>(_char);
	_float = static_cast<float>(_char);
	_double = static_cast<double>(_char);
}

void		Conversion::convertInt(char *input)
{
	_int = std::atoi(input);
	_char = static_cast<char>(_int);
	if (_double < INT_MIN || _double || INT_MAX)
		_float = static_cast<float>(_double);
	else
	{
		_float = static_cast<float>(_int);
		_double = static_cast<double>(_int);
	}
}

void		Conversion::convertFloat(char *input)
{
	_float = std::strtof(input, NULL);
	_char = static_cast<char>(_float);
	_int = static_cast<int>(_float);
	if (_float < std::numeric_limits<float>::min())
		std::cout << "MINMINMIN" << std::endl;
}

void		Conversion::convertDouble(void)
{
	_char = static_cast<char>(_double);
	_int = static_cast<int>(_double);
	_float = static_cast<float>(_double);
}

void		Conversion::printInf(std::ostream &out) const
{
	out << "char:   impossible" << std::endl;
	out << "int:    impossible" << std::endl;
	out << "float:  " << _inf + "f" << std::endl;
	out << "double: " << _inf << std::endl;
}

void		Conversion::printChar(std::ostream &out) const
{
	out << "char:   ";
	if (_isInf || _double < 0 || _double > UCHAR_MAX)
		out << "impossible";
	else if (std::isprint(_char))
		out << "'" << _char << "'";
	else
		out << "Non displayable";
	out << std::endl;
}

void		Conversion::printInt(std::ostream &out) const
{
	out << "int:    ";
	if (_isInf)
		out << "impossible";
	else if (_double < INT_MIN || _double > INT_MAX)
		out << "out of range";
	else
		out << _int;
	out << std::endl;
}

void		Conversion::printFloat(std::ostream &out) const
{
	out << "float:  ";
	if (_float < 1000000 && (_float - _int) == 0)
		out << _float << ".0";
	else
		out << _float;
	out << "f";
	out << std::endl;
}

void	Conversion::printDouble(std::ostream &out) const
{
	out << "double: ";
	if (_double < 1000000 && (_double - _int) == 0)
		out << _double << ".0";
	else
		out << _double;
	out << std::endl;
}

bool	Conversion::getIsInf(void) const
{
	return (_isInf);
}

bool	Conversion::getInputValid(void) const
{
	return (_inputValid);
}

int			Conversion::checkForInf(char *input)
{
	std::string	infs[4] = { "-inf", "inf", "+inf", "nan" };

	// _inf = NULL;
	for (int i = 0; i < 4; i++)
	{
		if (input == infs[i] || input == (infs[i] + "f"))
		{
			_isInf = true;
			_inf = infs[i];
			return (1);
		}
	}
	return (0);
}

void		Conversion::checkInput(char *input)
{
	int	i = 0;

	if (checkForInf(input))
		return ;
	if (!input || !input[0])
		return ;
	if (((std::string)input).length() == 1 && (input[0] == '+'
		|| input[0] == '-' || input[0] == 'f'
		|| input[0] == '.'))
	{
		_isChar = true;
		return;
	}
	if (input[0] == '+' || input[0] == '-')
		i++;
	if ((input[i] < '0' || input[i] > '9')
		&& ((std::string)input).length() != 1)
		return ;
	while (input[i] >= '0' && input[i] <= '9')
		i++;
	if (input[i] == '.')
	{
		_isFrac = true;
		i++;
		while (input[i] >= '0' && input[i] <= '9')
			i++;
	}
	if (input[i] == 'f' && !input[i + 1])
		_isFloat = true;
	else if (_isFrac && !input[i])
		_isDouble = true;
	else if (!input[i])
		_isInt = true;
	if (_isDouble || _isFloat || _isInt)
	{
		_isNum = true;
		_double = std::atof(input);
	}
	else if (((std::string)input).length() == 1 && std::isprint(input[0]))
		_isChar = true;
}

std::ostream	&operator<<(std::ostream &out, const Conversion &con)
{
	if (con.getIsInf())
		con.printInf(out);
	else if (con.getInputValid())
	{
		con.printChar(out);
		con.printInt(out);
		con.printFloat(out);
		con.printDouble(out);
	}
	else
		out << "Error: Invalid input" << std::endl;
	return (out);
}
