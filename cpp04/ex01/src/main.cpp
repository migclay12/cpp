/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:27:31 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/26 12:54:23 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Brain.hpp"

#define SIZE 10

//Change it a bit to your liking
//Change the wrongs or delete them -- probably change them
int	main(void)
{
	{
		Animal *pack[SIZE];

		for (int i = 0; i < SIZE; i++)
		{
			if (i < SIZE/2)
				pack[i] = new Cat();
			else
				pack[i] = new Dog();
		}
		std::cout << std::endl;
		for (int i = 0; i < SIZE; i++)
			pack[i]->makeSound();
		std::cout << std::endl;
		for (int i = 0; i < SIZE; i++)
			delete pack[i];
	}
	{
		std::cout << LIME << "\n\tTEST" << RESET << std::endl;
		Cat michi;
		michi.catSetIdea(0, "Maybe im a cat.");
		std::cout << "Michi's idea: " << michi.catGetIdea(0) << std::endl;
		Cat croqueta(michi);
		std::cout << "Croqueta's idea: " << croqueta.catGetIdea(0) << std::endl;
		Cat misifu;
		misifu = michi;
		std::cout << "Misifu's idea: " << misifu.catGetIdea(0) << std::endl;
		misifu.makeSound();
	}
	{
		std::cout << LIME << "\n\tTEST_2" << RESET << std::endl;
		Dog chucho;
		chucho.dogSetIdea(0, "Idea to test deep copy.");
		Dog balto = chucho;
		std::cout << "Dog: " << balto.dogGetIdea(0) << std::endl;
		balto.makeSound();
	}
	{
		std::cout << LIME << "\n\tSUBJECT_MAIN" << RESET << std::endl;
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		std::cout << std::endl;

		delete j;
		delete i;
	}
	return (0);
}
