/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:11:28 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/25 16:59:14 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGAAnimal_HPP
#define WRONGAAnimal_HPP

#include <string>
#include <iostream>

typedef std::string str;

class WrongAnimal
{
	protected:
		str type;
	public:
		WrongAnimal();
		WrongAnimal(str type);
		WrongAnimal(const WrongAnimal &cpy);
		virtual ~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &cpy);

		const str &getType(void) const;
		virtual void makeSound() const;
};

#endif
