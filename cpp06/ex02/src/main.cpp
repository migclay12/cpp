/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:18:19 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/05 18:45:19 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

Base *generate(void)
{
	std::srand(std::time(0));
	int random = std::rand() % 3;

	switch (random)
	{
		case 0:
			std::cout << "Generating A" << std::endl;
			return (new A);
		case 1:
			std::cout << "Generating B" << std::endl;
			return (new B);
		case 2:
			std::cout << "Generating C" << std::endl;
			return (new C);
		default:
			std::cout << "None generated" << std::endl;
			return (NULL);
			break;
	}
	return (NULL);
}

void identify(Base *p)
{
	if (p == NULL)
	{
		std::cout << "The pointer is NULL" << std::endl;
		return ;
	}
	if (dynamic_cast<A*>(p))
		std::cout << "The pointer is a A type." << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "The pointer is a B type." << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "The pointer is a C type." << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void) a;
		std::cout << "The pointer is a A type." << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void) b;
		std::cout << "The pointer is a B type." << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void) c;
		std::cout << "The pointer is a C type." << std::endl;
	}
	catch(const std::exception& e) {}
}

int main()
{
	Base *ptr = generate();

	identify(*ptr);
	identify(ptr);

	delete ptr;

	return 0;
}
