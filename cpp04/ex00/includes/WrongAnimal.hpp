/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:11:28 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/25 19:02:41 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

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
		~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &cpy);

		const str &getType(void) const;
		void makeSound() const;
};

#endif
