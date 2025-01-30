/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:12:13 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/05 13:12:33 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdint.h>

class Data
{
	public:
		Data();
		~Data();
		Data(const Data &src);
		Data &operator=(const Data &rSym);
		int intValue;
		char charValue;
		float floatValue;
};
