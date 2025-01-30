/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:06:25 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/12 15:06:25 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed()
{
	this->fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = (num << this->bits);
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = (num * (1 << this->bits));
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

float	Fixed::toFloat(void) const
{
	return ((float)(this->fixedPoint) / (float)(1 << this->bits));
}

int		Fixed::toInt(void) const
{
	return (this->fixedPoint / (int)(1 << this->bits));
}

std::ostream& operator<<(std::ostream &output, const Fixed& constrCopy)
{
	output << constrCopy.toFloat();
	return (output);
}
