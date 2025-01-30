/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:59:02 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/05 18:47:28 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

void	ScalarConverter::convert(str param)
{
		//Check for char param
		if (param.length() == 1 && isprint(param[0]) && !isdigit(param[0]))
		{
			char c = param[0];
			std::cout << "char: '" << c << "'\n";
			std::cout << "int: " << static_cast<int>(c) << "\n";
			std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f\n";
			std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << "\n";
			return;
		}

		//Handle special floating-point params
		if (param == "-inff" || param == "+inff" || param == "nanf" ||
			param == "-inf" || param == "+inf" || param == "nan")
		{
			str floatparam = param;
			if (floatparam[floatparam.size() - 1] == 'f')
				floatparam = floatparam.substr(0, floatparam.size() - 1);
			strtod(floatparam.c_str(), NULL);

			std::cout << "char: impossible\n";
			std::cout << "int: impossible\n";
			std::cout << "float: " << param << "\n";
			std::cout << "double: " << floatparam << "\n";
			return;
		}

		//Try to convert to double or float
		try
		{
			float floatValue = static_cast<float>(strtof(param.c_str(), NULL));
			double doubleValue = strtod(param.c_str(), NULL);

			std::cout << "char: ";
			if (floatValue >= std::numeric_limits<char>::min() && floatValue <= std::numeric_limits<char>::max() &&
				floor(floatValue) == floatValue)
			{ 
				if (isprint(static_cast<char>(floatValue)))
					std::cout << "'" << static_cast<char>(floatValue) << "'\n";
				else
					std::cout << "Non displayable\n";
			}
			else
				std::cout << "impossible\n";

			if (doubleValue >= std::numeric_limits<int>::min() && doubleValue <= std::numeric_limits<int>::max())
				std::cout << "int: " << static_cast<int>(doubleValue) << "\n";
			else
				std::cout << "int: impossible\n";

			std::cout << "float: " << std::fixed << std::setprecision(1) << floatValue << "f\n";
			std::cout << "double: " << std::fixed << std::setprecision(1) << doubleValue << "\n";
			return;
		} 
		catch (...)
		{
			//Do nothing, proceed to int conversion
		}

		//Try to convert to int
		try
		{
			int intValue = std::atoi(param.c_str());
			std::cout << "char: ";
			if (intValue >= std::numeric_limits<char>::min() && intValue <= std::numeric_limits<char>::max())
			{
				if (isprint(static_cast<char>(intValue)))
					std::cout << "'" << static_cast<char>(intValue) << "'\n";
				else
					std::cout << "Non displayable\n";
			}
			else
				std::cout << "impossible\n";

			std::cout << "int: " << intValue << "\n";
			std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(intValue) << "f\n";
			std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(intValue) << "\n";
		}
		catch (...)
		{
			std::cout << "char: impossible\n";
			std::cout << "int: impossible\n";
			std::cout << "float: impossible\n";
			std::cout << "double: impossible\n";
		}
}
