/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:52:23 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/25 19:00:04 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog();
		Dog(const Dog &cpy);
		~Dog();
		Dog &operator=(const Dog &cpy);
		virtual void makeSound() const;
		void 	dogSetIdea(int id, str idea);
		str		dogGetIdea(int id);
	private:
		Brain *brain;
};

#endif
