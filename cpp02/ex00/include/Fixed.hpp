/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:06:15 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/12 14:06:15 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>

class Fixed
{
private:
	int					fixedPoint;
	static const int	bits = 8;
public:
	Fixed();
	~Fixed();
	//Copy constructor
	Fixed(const Fixed &cpyConst);
	//Copy assignement operator
	Fixed &operator=(const Fixed &cpyOpp);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
