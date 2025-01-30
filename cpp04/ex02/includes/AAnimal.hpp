/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:44:43 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/25 17:16:22 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <string>
#include <iostream>
#include "Colors.hpp"

typedef std::string str;

class AAnimal
{
	protected:
		str type;
	public:
		AAnimal();
		AAnimal(str type);
		AAnimal(const AAnimal &cpy);
		virtual ~AAnimal();
		AAnimal &operator=(const AAnimal &cpy);

		const str &getType(void) const;
		virtual void makeSound() const = 0;
};

#endif
