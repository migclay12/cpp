/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:44:46 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/13 13:24:22 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <stdexcept>
#include <sstream>

class NonFoundException : public std::exception
{
	public:
		virtual const char * what() const throw();
};

template <typename T>
int easyFind(T &array, int num);
