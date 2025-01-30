/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:01:41 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/12 17:32:05 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"
#include "Array.hpp"

#define MAX_VAL 10

int main(int, char**)
{
	Array<int>	numbers(MAX_VAL);
	int*		mirror = new int[MAX_VAL];

	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int	value = rand();

		numbers[i] = value;
		mirror[i]  = value;
	}

	std::cout << "Print numbers:" << std::endl;
	numbers.print();

	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
		std::cout << "\nPrint test:" << std::endl;
		test.print();
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}

	Array<str> words(5);
	words[0] = "Esta";
	words[1] = "lista";
	words[2] = "contiene";
	words[3] = "cinco";
	words[4] = "strings";
	
	std::cout << "\nPrint words:" << std::endl;
	words.print();

	std::cout << "\nWrong int examples:" << std::endl;
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	std::cout << "\nPrint numbers:" << std::endl;
	numbers.print();
	delete [] mirror;
	return 0;
}
