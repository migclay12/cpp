/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readInput.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:45:29 by miggonza          #+#    #+#             */
/*   Updated: 2025/01/27 13:45:29 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

str	convert_int_to_date(int date)
{
	std::stringstream ss;
	ss << std::setw(8) << std::setfill('0') << date;
	std::string dateStr = ss.str();

	dateStr.insert(4, "-");
	dateStr.insert(7, "-");

	return (dateStr);
}

float    find_date(std::map<int, float>& database, int toFind)
{
	std::map<int, float>::iterator iter = database.lower_bound(toFind);

	std::cout << convert_int_to_date(toFind);
	
	if (iter->first == toFind)
		std::cout << " => " << iter->second;
	else
	{
		if (iter == database.begin() && iter->first != toFind)
			throw (std::runtime_error(" => Bitcoin did not exist at that time."));
		if (iter != database.begin())
			--iter;
		std::cout << " => " << iter->second;
	}
	return (iter->second);
}

void	print_results(float ammount, float exchangeRate)
{
	if (ammount < 0)
		std::cout << "Error: Not a positive number." << std::endl;
	else if (ammount > 1000)
		std::cout << "Error: Number too big." << std::endl;
	else
		std::cout << " * " << ammount << " = " << exchangeRate * ammount << std::endl;
}

void	read_input(std::map<int, float>& database, std::ifstream& inputFile)
{
	str	line;

	check_header("date | value\r", inputFile);

	while (std::getline(inputFile, line))
	{
		std::istringstream isStr(line);
		str dateStr;
		str ammountStr;

		if (std::getline(isStr, dateStr, '|') && std::getline(isStr, ammountStr))
		{
			int dateInt;
			float ammount;
			try
			{
				dateInt = parse_date(dateStr, "Infile");
				ammount = parse_ammount(ammountStr, "Infile");
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
				continue ;
			}

			float	exchangeRate = 0;

			try
			{
				if (ammount >= 0 && ammount <= 1000)
					exchangeRate = find_date(database, dateInt);
				print_results(ammount, exchangeRate);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		else if (line.length() > 1)
			std::cerr << "Infile: bad input => " << line << std::endl;
	}
	inputFile.close();
}
