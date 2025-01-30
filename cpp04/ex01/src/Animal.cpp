/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:45:36 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/26 12:36:43 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
	std::cout << CYAN << "Animal" << RESET << " constructor has been called" << std::endl;
	type = "Unasigned";
}

Animal::Animal(str _type)
{
	std::cout << CYAN << "Animal" << RESET << " constructor setter has been called" << std::endl;
	type = _type;
}

Animal::~Animal()
{
	std::cout << CYAN << "Animal" << RESET << " has destroyed everything" << std::endl;
}

Animal::Animal(const Animal &cpy)
{
	std::cout << CYAN << "Animal" << RESET << " copy has been called" << std::endl;
	this->type = cpy.type;
}

Animal &Animal::operator=(const Animal &cpy)
{
	std::cout << CYAN << "Animal" << RESET << " copy opperator has been called" << std::endl;
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
	std::cout << CYAN << "What does the fox say???" << RESET << std::endl;
}
