/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:45:19 by miggonza          #+#    #+#             */
/*   Updated: 2025/01/27 13:45:19 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iostream>
#include <string>
#include <stack>
#include <cctype>
#include <cstdlib>

typedef std::string str;

class RPN
{
	private:
		std::stack<int> _stack;
	public:
		RPN();
		~RPN();
		RPN(char *input);
		RPN(const RPN &cpy);
		RPN &operator=(const RPN &cpy);
};
