/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:43:54 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/03 15:58:53 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

/*    -----------------------    CREATION / DESTRUCTION    ----------------------    */

Fixed::Fixed(void) : _fixedPointValue(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const dec_int)
{
	// std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = dec_int << _fractionalBits;
}

Fixed::Fixed(float const dec_flt)
{
	// std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf((dec_flt * (1 << _fractionalBits)));
}

Fixed::Fixed(Fixed const &other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

/*    ------------------------    OPERATOR OVERLOADS    -----------------------    */

Fixed	&Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_fixedPointValue = other.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &other)
{
	out << other.toFloat();
	return (out);
}

/*            ---------------    comparison operators    ---------------           */

bool	Fixed::operator>(const Fixed &other) const
{
	return (_fixedPointValue > other._fixedPointValue);
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (_fixedPointValue < other._fixedPointValue);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (_fixedPointValue >= other._fixedPointValue);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (_fixedPointValue <= other._fixedPointValue);
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (_fixedPointValue == other._fixedPointValue);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (_fixedPointValue != other._fixedPointValue);
}

/*            ---------------    arithmetic operators    ---------------           */

Fixed	Fixed::operator+(const Fixed &other)
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &other)
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &other)
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &other)
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

/*          -------------    increment/decrement operators    -------------         */

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;

	_fixedPointValue++;
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;

	_fixedPointValue--;
	return (temp);
}

Fixed	Fixed::operator++(void)
{
	++_fixedPointValue;
	return (*this);
}

Fixed	Fixed::operator--(void)
{
	--_fixedPointValue;
	return (*this);
}

/*     ------------------------    MEMBER FUNCTIONS    -----------------------     */

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

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	if (first < second)
		return (first);
	return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	if (first > second)
		return (first);
	return (second);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first < second)
		return (first);
	return (second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first > second)
		return (first);
	return (second);
}
