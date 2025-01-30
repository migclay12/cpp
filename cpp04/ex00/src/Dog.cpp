/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:26:09 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/25 12:57:06 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor has been called" << std::endl;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog has destroyed everything" << std::endl;
}

Dog::Dog(const Dog &cpy)
{
	std::cout << "Dog copy has been called" << std::endl;
	this->type = cpy.type;
}

Dog &Dog::operator=(const Dog &cpy)
{
	std::cout << "Dog copy opperator has been called" << std::endl;
	if (this != &cpy)
		this->type = cpy.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "I am a Dog bark" << std::endl;
}
