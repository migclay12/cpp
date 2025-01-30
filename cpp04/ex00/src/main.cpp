/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:27:31 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/26 12:54:13 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int	main(void)
{
	{	
		std::cout << "\x1b[32m	MAIN_OBJECTS\x1b[0m" << std::endl;
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		
		std::cout << "\nObject type -> " << meta->getType() << " -> his sound is: ";
					meta->makeSound();
		std::cout << "Object type -> " << j->getType() << " -> his sound is: ";
					j->makeSound();
		std::cout << "Object type -> " << i->getType() << " -> his sound is: ";
					i->makeSound();
					std::cout << std::endl;
		delete	j;
		delete	i;
		delete	meta;
	}
	{
		std::cout << "\n\x1b[31m\tWRONG_OBJECTS\x1b[0m" << std::endl;
		const WrongAnimal *wrongAnimal = new WrongAnimal();
		const WrongAnimal *wrongCat = new WrongCat();

		std::cout << "\nObject type -> " << wrongAnimal->getType() << " -> his sound is: ";
					wrongAnimal->makeSound();
		std::cout << "Object type -> " << wrongCat->getType() << " -> his sound is: ";
					wrongCat->makeSound();
					std::cout << std::endl;
		delete	wrongCat;
		delete	wrongAnimal;
	}
	return (0);
}
