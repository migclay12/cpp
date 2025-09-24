/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:04:24 by miggonza          #+#    #+#             */
/*   Updated: 2025/02/10 16:30:57 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iomanip>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <ctime>
#include <fstream>
#include <map>

typedef std::string str;

bool	is_valid_date(const std::tm& date);
int		convert_date_to_int(std::tm& date);
int		parse_date(std::string& dateString, std::string file);
float	parse_ammount(std::string& ammountString, std::string file);
bool	check_float(std::string& str);

void	check_header(const std::string& header, std::ifstream& inputFile);
void	fill_database(std::map<int, float>& database, std::ifstream& dataFile);
void	read_input(std::map<int, float>& database, std::ifstream& inputFile);
str		convert_int_to_date(int date);
