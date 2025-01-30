/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:46:28 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/11 14:46:28 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	is_num(std::string num)
{
	int i = 0;

	while (num[i])
	{
		if ((num[i] < '0' || num[i] > '9') && num[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	check_spaces(std::string str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int check_empty(std::string contact[5])
{
	int i = 0;
	int j;

	while (i <= 4)
	{
		j = 0;
		if (contact[i].empty())
		{
			std::cout << "There is an empty piece of information, the contact has not been saved" << std::endl;
			return (1);
		}
		while (contact[i][j])
		{
			if (contact[i][j] == '\t')
			{
				std::cout << "Tabs are not accepted when saving a contact" << std::endl;
				return (1);
			}
			j++;
		}
		if (check_spaces(contact[i]))
		{
			std::cout << "The contact is full of spaces" << std::endl;
			return (1);
		}
		i++;
	}
	return (0);
}

int main()
{
	PhoneBook	phonebook;
	std::string	input;
	std::string info[5];
	int			num;

	while(1)
	{
		std::cout << "Please choose an option between ADD, SEARCH and EXIT: " << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout << "Please enter your first name: " << std::endl;
			std::getline(std::cin, info[0]);
			std::cout << "Please enter your last name: " << std::endl;
			std::getline(std::cin, info[1]);
			std::cout << "Please enter your nickname: " << std::endl;
			std::getline(std::cin, info[2]);
			do
			{
				std::cout << "Please enter your phone number: " << std::endl;
				std::getline(std::cin, info[3]);
				if (is_num(info[3]))
					break ;
				std::cout << "That phone number was not full of ints" << std::endl;
			} while (!is_num(info[3]));
			std::cout << "Please tell me your darkest secret: " << std::endl;
			std::getline(std::cin, info[4]);
			if (!check_empty(info))
			{
				phonebook.add_contact(info);
				std::cout << "Contact has been saved correctly" << std::endl;
			}
		}
		if (input == "SEARCH")
		{
			phonebook.display_phonebook();
			std::cout << "Please enter the number of the contact you want to desplay: " << std::endl;
			std::cin >> num;
			if (!std::cin.good() || num < 0 || num >= phonebook.get_size())
			{
				std::cout << "Invalid Index!\n" << std::endl;
				std::cin.clear();
				std::getline(std::cin, input);
				continue ;
			}
			phonebook.display_contact(num);
			std::cin.clear();
			std::getline(std::cin, input);
		}
		if (input == "EXIT")
			break ;
	}
	return (0);
}
