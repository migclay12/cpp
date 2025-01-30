/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:06:28 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/12 15:06:28 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					fixedPoint;
	static const int	bits = 8;
public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	//Copy constructor
	Fixed(const Fixed &cpyConst);
	//Copy assignement operator
	Fixed &operator=(const Fixed &cpyOpp);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream &output, const Fixed& constrCopy);

#endif
