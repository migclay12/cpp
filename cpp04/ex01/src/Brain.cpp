/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:11:53 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/25 16:58:40 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << GOLD << "Brain" << RESET << " constructor has been called" << std::endl;
}

Brain::~Brain()
{
	std::cout << GOLD << "Brain" << RESET << " has destroyed everything" << std::endl;
}

Brain::Brain(const Brain &cpy)
{
	std::cout << GOLD << "Brain" << RESET << " copy has been called" << std::endl;
	for (int i = 0; i < 100; i++)
			this->ideas[i] = cpy.ideas[i];
}

Brain &Brain::operator=(const Brain &cpy)
{
	std::cout << GOLD << "Brain" << RESET << " copy opperator has been called" << std::endl;
	if (this != &cpy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = cpy.ideas[i];
	}
	return (*this);
}

void Brain::setIdea(int id, str idea)
{
	ideas[id] = idea;
}

str Brain::getIdea(int id)
{
	return (ideas[id]);
}
