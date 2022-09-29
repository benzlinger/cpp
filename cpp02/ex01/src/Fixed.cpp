/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:43:54 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/29 14:33:05 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

/*    -----------------------    CREATION / DESTRUCTION    ----------------------    */

Fixed::Fixed(void) : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const dec_int)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = dec_int << _fractionalBits;
}

Fixed::Fixed(float const dec_flt)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf((dec_flt * (1 << _fractionalBits)));
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

/*    ------------------------    OPERATOR OVERLOADS    -----------------------    */

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_fixedPointValue = other.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &other)
{
	out << other.toFloat();
	return (out);
}

/*    ------------------------    MEMBER FUNCTIONS    -----------------------    */

int		Fixed::getRawBits(void) const
{
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_fixedPointValue / (float)(1 << _fractionalBits));
}

int		Fixed::toInt(void) const
{
	return (_fixedPointValue >> _fractionalBits);
}
