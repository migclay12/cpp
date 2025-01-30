/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:08:44 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/11 17:08:44 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

typedef std::string str;

int check_empty(str str)
{
	if (str.empty())
	{
		std::cout << "There is an empty piece of information" << std::endl;
		return (1);
	}
	return (0);
}

void	searchAndReplace(str &line, str search, str replace)
{
	size_t	position = 0;

	while ((position = line.find(search, position)) != str::npos)
	{
		line = line.substr(0, position) + replace + line.substr(position + search.length());
		position += replace.length();
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "The amount of inputs is worng" << std::endl;
		return (0);
	}

	if (check_empty(argv[1]) || check_empty(argv[2]) || check_empty(argv[3]))
		return (0);

	str	infile = argv[1];
	str search = argv[2];
	str	replace = argv[3];
	str	outfile = infile + ".replace";
	str	line;

	std::ifstream	input(infile.c_str());
	
	if (input.is_open())
	{
		std::ofstream	output(outfile.c_str());
		while (std::getline(input, line))
		{
			searchAndReplace(line, search, replace);
			output << line;
			if (!input.eof())
				output << std::endl;
		}
		input.close();
		output.close();
	}
	else
		std::cout << infile << " was not oppened correctly" << std::endl;
}
