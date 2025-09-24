/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:55:40 by miggonza          #+#    #+#             */
/*   Updated: 2025/02/11 16:26:01 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
			throw (std::runtime_error("Error: You must have one argument"));

		std::ifstream dataFile("data.csv");
		if (!dataFile)
			throw(std::runtime_error("Error: Couldn't open data file"));

		std::map<int, float> database;
		fill_database(database, dataFile);

		std::ifstream inputFile(argv[1]);
		if (!inputFile)
			throw (std::runtime_error("Error: Failed to open input file"));

		read_input(database, inputFile);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}