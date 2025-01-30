/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:06:19 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/12 14:06:19 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed()
{
	this->fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cpyConst)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPoint = cpyConst.fixedPoint;
}

Fixed &Fixed::operator=(const Fixed &cpyOpp)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &cpyOpp)
		this->fixedPoint = cpyOpp.fixedPoint;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}
