/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:21:55 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/25 12:56:54 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor has been called" << std::endl;
	type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat has destroyed everything" << std::endl;
}

Cat::Cat(const Cat &cpy)
{
	std::cout << "Cat copy has been called" << std::endl;
	this->type = cpy.type;
}

Cat &Cat::operator=(const Cat &cpy)
{
	std::cout << "Cat copy opperator has been called" << std::endl;
	if (this != &cpy)
		this->type = cpy.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "I am a Cat miauuuuuuuuu" << std::endl;
}
