/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:45:16 by miggonza          #+#    #+#             */
/*   Updated: 2025/02/17 14:13:47 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool check_int(str &num)
{
	double check = strtod(num.c_str(), NULL);
	
	if (num.length() > 11 || check < 0 || check > 2147483647)
		throw std::runtime_error("Error: Invalid number: " + num);
	if (num.length() == 1 && (num[0] == '-' || num[0] == '+'))
		return (false);
	for (size_t i = 0; i < num.length(); i++)
	{
		if (i == 0 && (!isdigit(num[i]) && num[i] != '+'))
			return (false);
		if (i != 0 && !isdigit(num[i]))
			return (false);
	}
	return (true);
}

void store_numbers(std::vector<int> &vector, char *num)
{
	std::istringstream iss(num);
	str token;
	int nbr = 0;

	while (iss >> token)
	{
		if (check_int(token))
		{
			nbr = atoi(token.c_str());
			vector.push_back(nbr);
		}
		else
			throw std::runtime_error("Error: Invalid number: " + token);
	}
}

int main(int argc, char **argv)
{
	try
	{
		if (argc < 2)
			throw std::runtime_error("Error: Not enough arguments");

		std::vector<int> vector;
		
		for (int i = 1; argv[i]; i++)
			store_numbers(vector, argv[i]);
		if (vector.size() == 0)
			throw (std::runtime_error("Error: Empty argument."));

		pmerge(vector);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
