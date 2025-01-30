/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:07:56 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/13 13:24:14 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"

int	main(void)
{
	std::vector<int> myVector;
	myVector.push_back(2);
	myVector.push_back(3);
	myVector.push_back(5);
	myVector.push_back(7);
	myVector.push_back(11);

	std::list<int> myList;
	myList.push_back(1);
	myList.push_back(2);
	myList.push_back(3);
	myList.push_back(5);
	myList.push_back(8);

	int	find = 2;
	int	val = 0;
	
	std::cout << "\x1b[32mFound in myVector\x1b[0m" << std::endl;
	try
	{
		val = easyFind(myVector, find);
		std::cout << "Value " << val << " found in myVector." << std::endl;

		find = 11;
		
		val = easyFind(myVector, find);
		std::cout << "Value " << val << " found in myVector." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\x1b[32mFound in myList\x1b[0m" << std::endl;
	try
	{
		find = 3;

		val = easyFind(myList, find);
		std::cout << "Value " << val << " found in myList." << std::endl;

		find = 5;

		val = easyFind(myList, find);
		std::cout << "Value " << val << " found in myList." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\x1b[31mError tests\x1b[0m" << std::endl;
	try
	{
		find = -10;
		val = easyFind(myVector, find);
		std::cout << "Value " << val << " found in myVector." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		find = 8923432;
		val = easyFind(myList, find);
		std::cout << "Value " << val << " found in myVector." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
