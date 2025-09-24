/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:55:37 by miggonza          #+#    #+#             */
/*   Updated: 2025/02/11 16:20:05 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool check_float(str &num)
{
	for (size_t i = 0; i < num.length(); i++)
	{
		if (!isdigit(num[i]) && num[i] != '.' && num[i] != '-' && num[i] != '+')
			return (false);
	}
	return (true);
}

bool is_valid_date(const std::tm &date)
{
	return (date.tm_year >= 0
		&& (date.tm_mon - 1) >= 0   &&  (date.tm_mon - 1) < 12
		&& (date.tm_mday >= 1)      &&  (date.tm_mday <= 31));
}

int	convert_date_to_int(std::tm& date)
{
	return (date.tm_year * 10000 + date.tm_mon * 100 + date.tm_mday);
}

int parse_date(std::string &dateString, std::string file)
{
	std::tm date = {};
	std::istringstream dateStream(dateString);
	char dash1, dash2, extraChar;

	if (dateStream >> date.tm_year >> dash1 >> date.tm_mon >> dash2 >> date.tm_mday
		&& dash1 == '-' && dash2 == '-' && !(dateStream >> extraChar))
	{
		if (is_valid_date(date))
			return (convert_date_to_int(date));
		else
			throw (std::runtime_error(file + ": Invalid date: " + dateString));
	}
	else
		throw (std::runtime_error(file + ": Invalid date: " + dateString));
	return (-1);
}

void check_header(const std::string &header, std::ifstream &inputFile)
{
	str line;

	if (std::getline(inputFile, line))
	{
		if (line == header)
			return ;
		else
			throw(std::runtime_error("Error: First line must contain the appropiate header -> " + header));
	}
	else
		throw(std::runtime_error("Error: file is empty"));
}

float parse_ammount(std::string& ammountString, str file)
{
	str trimedAmmount = ammountString;
	size_t firstNonSpace = trimedAmmount.find_first_not_of(" \t\n\r");
	size_t lastNonSpace = trimedAmmount.find_last_not_of(" \t\n\r");

	if (firstNonSpace != str::npos && lastNonSpace != str::npos)
		trimedAmmount = trimedAmmount.substr(firstNonSpace, lastNonSpace - firstNonSpace + 1);
	else
		throw (std::runtime_error(file + ": Invalid ammount:" + ammountString));

	if (check_float(trimedAmmount))
	{
		std::istringstream ammountStr(trimedAmmount);
		float ammount;

		if (ammountStr >> ammount)
		{
			if (ammountStr.eof())
				return (ammount);
			else
				throw (std::runtime_error(file + ": Invalid ammount:" + ammountString));
		}
	}
	throw (std::runtime_error(file + ": Invalid ammount:" + ammountString));
}

void fill_database(std::map<int, float> &database, std::ifstream &dataFile)
{
	str line;

	check_header("date,exchange_rate", dataFile);

	while (std::getline(dataFile, line))
	{
		std::istringstream isStr(line);
		str dateStr;
		str exchangeStr;

		if (std::getline(isStr, dateStr, ',') && std::getline(isStr, exchangeStr))
		{
			int dateInt;
			float exchange;
			try
			{
				dateInt = parse_date(dateStr, "Database");
				exchange = parse_ammount(exchangeStr, "Database");
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
				continue ;
			}
			database[dateInt] = exchange;
		}
		else
			std::cerr << "Database: bad input: " << line << std::endl;
	}
	dataFile.close();
}
