/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:37:26 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/05 18:49:33 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"
#include "../includes/Data.hpp"

int main()
{
	Data originalData;
	originalData.intValue = 42;
	originalData.charValue = 'A';
	originalData.floatValue = 3.14f;

	uintptr_t serialized = Serializer::serialize(&originalData);

	std::cout << "Value: " << serialized << std::endl;
	std::cout << std::endl;

	Data* deserialized = Serializer::deserialize(serialized);

	std::cout << "Value: " << deserialized << std::endl;
	std::cout << std::endl;

	if (deserialized == &originalData)
	{
		std::cout << "Deserialized Data values:" << std::endl;
		std::cout << "intValue: " << deserialized->intValue << std::endl;
		std::cout << "charValue: " << deserialized->charValue << std::endl;
		std::cout << "floatValue: " << deserialized->floatValue << std::endl;
	}
	else
		std::cout << "Serialization and deserialization failed!" << std::endl;

	return 0;
}
