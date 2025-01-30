/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:44:43 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/25 18:59:29 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Colors.hpp"

typedef std::string str;

class Animal
{
	protected:
		str type;
	public:
		Animal();
		Animal(str type);
		Animal(const Animal &cpy);
		virtual ~Animal();
		Animal &operator=(const Animal &cpy);

		const str &getType(void) const;
		virtual void makeSound() const;
};

#endif
