/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:40:07 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/05 18:46:06 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Data.hpp"

Data::Data()
{
	std::cout << "Data default constructor called." << std::endl;
}

Data::Data(const Data &cpy)
{
	std::cout << "Data copy constructor called." << std::endl;
	*this = cpy;
}

Data::~Data()
{
	std::cout << "Data default destructor called." << std::endl;
}

Data &	Data::operator=(const Data &cpy)
{
	if (this != &cpy) {
		intValue = cpy.intValue;
		charValue = cpy.charValue;
		floatValue = cpy.floatValue;
	}
	return *this;
}
