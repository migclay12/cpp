/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:51:40 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/25 18:28:40 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat &cpy);
		~Cat();
		Cat &operator=(const Cat &cpy);
		virtual void makeSound() const;
		void 	catSetIdea(int id, str idea);
		str		catGetIdea(int id);
};

#endif
