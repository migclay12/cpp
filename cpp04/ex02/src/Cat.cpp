/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:21:55 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/25 16:56:30 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat()
{
	std::cout << RED << "Cat" << RESET << " constructor has been called" << std::endl;
	brain = new Brain();
	type = "Cat";
}

Cat::~Cat()
{
	std::cout << RED << "Cat" << RESET << " has destroyed everything" << std::endl;
	delete brain;
}

Cat::Cat(const Cat &cpy)
{
	std::cout << RED << "Cat" << RESET << " copy has been called" << std::endl;
	this->type = cpy.type;
	if (cpy.brain)
		brain = new Brain(*cpy.brain);
	else
		brain = NULL;
}

Cat &Cat::operator=(const Cat &cpy)
{
	std::cout << RED << "Cat" << RESET << " copy opperator has been called" << std::endl;
	if (this != &cpy)
	{
		this->type = cpy.type;
		if (brain)
			delete brain;
		brain = new Brain(*cpy.brain);
	}
	return (*this);
}

void Cat::catSetIdea(int id, str idea)
{
	brain->setIdea(id, idea);
}

str Cat::catGetIdea(int id)
{
	return(brain->getIdea(id));
}

void Cat::makeSound() const
{
	std::cout << RED << "I am a Cat miauuuuuuuuu" << RESET << std::endl;
}
