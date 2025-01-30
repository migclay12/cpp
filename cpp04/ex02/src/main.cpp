/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:27:31 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/26 12:38:41 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Brain.hpp"

int	main(void)
{
	{
		std::cout << LIME << "\n\tCREATE_DOGS" << RESET << std::endl;
		Dog	d_heap;
		Dog	*d_stack = new Dog();

		std::cout << LIME << "\n\tCREATE_CATS" << RESET << std::endl;
		Cat	c_heap;
		Cat	*c_stack = new Cat();

		std::cout << std::endl;
		d_stack->makeSound();
		d_heap.makeSound();
		c_stack->makeSound();
		c_heap.makeSound();
		std::cout << LIME << "\n\tDELETE_STACK" << RESET << std::endl;
		delete d_stack;
		delete c_stack;
		std::cout << LIME << "\n\tDELETE_HEAP" << RESET << std::endl;
	}
	
	//The next scope will not compile because the AAnimal class is abstract.
		//const AAnimal* meta = new AAnimal();
	return (0);
}

