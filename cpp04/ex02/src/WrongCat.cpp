/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:10:11 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/25 12:57:23 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor has been called" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat has destroyed everything" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy)
{
	std::cout << "WrongCat copy has been called" << std::endl;
	this->type = cpy.type;
}

WrongCat &WrongCat::operator=(const WrongCat &cpy)
{
	std::cout << "WrongCat copy opperator has been called" << std::endl;
	if (this != &cpy)
		this->type = cpy.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "I am a WrongCat muuuuuuuuu" << std::endl;
}
