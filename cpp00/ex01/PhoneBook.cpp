/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:46:30 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/11 14:46:30 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
	this->size = 0;
}

PhoneBook::~PhoneBook()
{
}

int 	PhoneBook::get_size() const
{
	return (this->size);
}

void	print_name(std::string str)
{
	unsigned int	i = 0;

	if (str.length() > 10)
	{
		std::cout << str.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		std::cout << str;
		while (i < 10 - str.length())
		{
			std::cout << " ";
			i++;
		}
	}
}

void	PhoneBook::add_contact(std::string info[5])
{
	int	index;

	index = this->index;
	this->contacts[index].set_firstname(info[0]);
	this->contacts[index].set_lastname(info[1]);
	this->contacts[index].set_nickname(info[2]);
	this->contacts[index].set_number(info[3]);
	this->contacts[index].set_secret(info[4]);
	this->index = (index + 1) % 8;

	if (this->size < 8)
		this->size++;
}

void	PhoneBook::display_contact(int i) const
{
	std::cout << "First name: " << this->contacts[i].get_firstname() << std::endl;
	std::cout << "Last name: " << this->contacts[i].get_lastname() << std::endl;
	std::cout << "Nickname: " << this->contacts[i].get_nickname() << std::endl;
	std::cout << "Number: " << this->contacts[i].get_number() << std::endl;
	std::cout << "Darkest secret: " << this->contacts[i].get_secret() << std::endl;
}

void	PhoneBook::display_phonebook() const
{
	int i = 0;

	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|  index   |first name|last name | nickname |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;

	while (i < this->size)
	{
		std::cout << "|    ";
		std::cout << i;
		std::cout << "     |";
		print_name(this->contacts[i].get_firstname());
		std::cout << "|";
		print_name(this->contacts[i].get_lastname());
		std::cout << "|";
		print_name(this->contacts[i].get_nickname());
		std::cout << "|" << std::endl;
		std::cout << "+----------+----------+----------+----------+" << std::endl;
		i++;
	}
	std::cout << "\n";
}