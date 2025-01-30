/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:12:33 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/25 12:39:33 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAAnimal constructor has been called" << std::endl;
	type = "Unasigned";
}

WrongAnimal::WrongAnimal(str _type)
{
	std::cout << "WrongAAnimal constructor setter has been called" << std::endl;
	type = _type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAAnimal has destroyed everything" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	std::cout << "WrongAAnimal copy has been called" << std::endl;
	this->type = cpy.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cpy)
{
	std::cout << "WrongAAnimal copy opperator has been called" << std::endl;
	if (this != &cpy)
		this->type = cpy.type;
	return (*this);
}

const str &WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "I don't know what the fox says" << std::endl;
}
