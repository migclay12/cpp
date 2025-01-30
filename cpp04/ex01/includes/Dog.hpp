/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:52:23 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/25 18:59:39 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog &cpy);
		~Dog();
		Dog &operator=(const Dog &cpy);
		virtual void makeSound() const;
		void 	dogSetIdea(int id, str idea);
		str		dogGetIdea(int id);
};

#endif
