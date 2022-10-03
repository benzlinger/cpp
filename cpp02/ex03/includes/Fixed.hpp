/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:44:11 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/03 14:41:51 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed {

public:

	Fixed(void);
	Fixed(int const dec_int);
	Fixed(float const dec_flt);
	Fixed(Fixed const &other);
	~Fixed(void);

	Fixed				&operator=(const Fixed &other);
	
	bool				operator>(const Fixed &other) const;
	bool				operator<(const Fixed &other) const;
	bool				operator>=(const Fixed &other) const;
	bool				operator<=(const Fixed &other) const;
	bool				operator==(const Fixed &other) const;
	bool				operator!=(const Fixed &other) const;

	Fixed				operator+(const Fixed &other);
	Fixed				operator-(const Fixed &other);
	Fixed				operator*(const Fixed &other);
	Fixed				operator/(const Fixed &other);

	Fixed				operator++(int);
	Fixed				operator--(int);
	Fixed				operator++(void);
	Fixed				operator--(void);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;
	static Fixed		&min(Fixed &first, Fixed &second);
	static Fixed		&max(Fixed &first, Fixed &second);
	static const Fixed	&min(const Fixed &first, const Fixed &second);
	static const Fixed	&max(const Fixed &first, const Fixed &second);

private:

	int					_fixedPointValue;
	static const int	_fractionalBits = 8;

};

std::ostream	&operator<<(std::ostream &out, const Fixed &other);

#endif
