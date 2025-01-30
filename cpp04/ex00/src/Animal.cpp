/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:45:36 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/25 12:39:01 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor has been called" << std::endl;
	type = "Unasigned";
}

Animal::Animal(str _type)
{
	std::cout << "Animal constructor setter has been called" << std::endl;
	type = _type;
}

Animal::~Animal()
{
	std::cout << "Animal has destroyed everything" << std::endl;
}

Animal::Animal(const Animal &cpy)
{
	std::cout << "Animal copy has been called" << std::endl;
	this->type = cpy.type;
}

Animal &Animal::operator=(const Animal &cpy)
{
	std::cout << "Animal copy opperator has been called" << std::endl;
	if (this != &cpy)
		this->type = cpy.type;
	return (*this);
}

const str &Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "What does the fox say???" << std::endl;
}
