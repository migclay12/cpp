/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:26:09 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/25 16:57:49 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog()
{
	std::cout << GREEN << "Dog" << RESET << " constructor has been called" << std::endl;
	brain = new Brain();
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << GREEN << "Dog" << RESET << " has destroyed everything" << std::endl;
	delete brain;
}

Dog::Dog(const Dog &cpy)
{
	std::cout << GREEN << "Dog" << RESET << " copy has been called" << std::endl;
	this->type = cpy.type;
	if (cpy.brain)
		brain = new Brain(*cpy.brain);
	else
		brain = NULL;
}

Dog &Dog::operator=(const Dog &cpy)
{
	std::cout << GREEN << "Dog" << RESET << " copy opperator has been called" << std::endl;
	if (this != &cpy)
	{
		this->type = cpy.type;
		if (brain)
			delete brain;
		brain = new Brain(*cpy.brain);
	}
	return (*this);
}

void Dog::dogSetIdea(int id, str idea)
{
	brain->setIdea(id, idea);
}

str Dog::dogGetIdea(int id)
{
	return(brain->getIdea(id));
}

void Dog::makeSound() const
{
	std::cout << GREEN << "I am a Dog bark" << RESET << std::endl;
}
