/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:06:55 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/12 15:06:55 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed()
{
	this->fixedPoint = 0;
}

Fixed::Fixed(const int num)
{
	this->fixedPoint = (num << this->bits);
}

Fixed::Fixed(const float num)
{
	this->fixedPoint = roundf(num * (1 << this->bits));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &cpyConst)
{
	this->fixedPoint = cpyConst.fixedPoint;
}

Fixed &Fixed::operator=(const Fixed &cpyOpp)
{
	if (this != &cpyOpp)
		this->fixedPoint = cpyOpp.fixedPoint;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return(this->fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}

float	Fixed::toFloat() const
{
	return ((float)this->fixedPoint / (float)(1 << this->bits));
}

int		Fixed::toInt(void) const
{
	return (this->fixedPoint / (int)(1 << this->bits));
}

//Operators
bool Fixed::operator>(const Fixed &other) const
{
	return (this->fixedPoint > other.fixedPoint);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->fixedPoint < other.fixedPoint);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->fixedPoint >= other.fixedPoint);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->fixedPoint <= other.fixedPoint);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->fixedPoint == other.fixedPoint);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->fixedPoint != other.fixedPoint);
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed result;

	result.setRawBits(this->getRawBits() + other.getRawBits());
	return (result);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result;

	result.setRawBits(this->getRawBits() - other.getRawBits());
	return (result);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed result;

	result.setRawBits((this->getRawBits() * other.getRawBits()) >> this->bits);
	return (result);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed result;

	result = (this->toFloat() / other.toFloat());
	return (result);
}

Fixed &Fixed::operator++(void)
{
	this->fixedPoint++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed copy;

	copy = *this;
	this->fixedPoint++;
	return (copy);
}

Fixed &Fixed::operator--(void)
{
	this->fixedPoint++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed copy;

	copy = *this;
	this->fixedPoint++;
	return (copy);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream& operator<<(std::ostream &output, const Fixed& constrCopy)
{
	output << constrCopy.toFloat();
	return (output);
}
