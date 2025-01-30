/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:09:40 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/05 16:06:26 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdint.h>

class Data;

class Serializer
{
	private:
		Serializer();
		~Serializer();
		Serializer(const Serializer &cpy);
		Serializer &operator=(const Serializer &cpy);
	public:
		static uintptr_t serialize(Data* ptr);
		static Data *deserialize(uintptr_t raw);
};
