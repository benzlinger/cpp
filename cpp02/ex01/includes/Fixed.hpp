/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:44:11 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/29 13:25:01 by btenzlin         ###   ########.fr       */
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

	Fixed			&operator=(const Fixed &other);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:

	int					_fixedPointValue;
	static const int	_fractionalBits = 8;

};

std::ostream	&operator<<(std::ostream &out, const Fixed &other);

#endif
