/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:45:23 by miggonza          #+#    #+#             */
/*   Updated: 2025/01/27 13:45:23 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(char *input)
{
	int first, second, result = 0;
	int num = 0;
	int sign = 0;
	str signs = "*-+/";

	for (int i = 0; input[i]; i++)
	{
		if (input[i] == ' ')
			continue;
		if (isdigit(input[i]))
			num++;
		else if (signs.find(input[i]) != str::npos)
			sign++;
	}

	if (sign != num - 1)
	{
		std::cout << "Error: Invalid syntax." << std::endl;
		return;
	}

	for (int i = 0; input[i]; i++)
	{
		if (input[i] == ' ')
			continue;
		if (isdigit(input[i]))
			_stack.push(input[i] - '0');
		else if (signs.find(input[i]) != str::npos)
		{
			if (_stack.size() < 2)
			{
				std::cout << "Error" << std::endl;
				return;
			}

			second = _stack.top(); _stack.pop();
			first = _stack.top(); _stack.pop();

			if (input[i] == '/' && second == 0)
			{
				std::cout << "Error: Division by zero." << std::endl;
				return;
			}

			switch (input[i])
			{
				case '+':
					result = first + second;
					break;
				case '-':
					result = first - second;
					break;
				case '*':
					result = first * second;
					break;
				case '/':
					if (second == 0)
					{
						std::cout << "Error: Division by zero." << std::endl;
						return;
					}
					result = first / second;
					break;
				default:
					std::cout << "Error: Invalid operator." << std::endl;
					return;
			}
			_stack.push(result);
		}
		else
		{
			std::cout << "Error" << std::endl;
			return ;
		}
	}
	std::cout << result << std::endl;
}

RPN::RPN()
{
}

RPN::~RPN()
{
}

RPN::RPN(const RPN &src)
{
	this->_stack = src._stack;
	*this = src;
}

RPN &RPN::operator=(const RPN &rSym)
{
	if (this != &rSym)
	{
		this->_stack = rSym._stack;
	}
	return *this;
}
