/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:51:40 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/25 17:17:58 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat();
		Cat(const Cat &cpy);
		~Cat();
		Cat &operator=(const Cat &cpy);
		virtual void makeSound() const;
		void 	catSetIdea(int id, str idea);
		str		catGetIdea(int id);
	private:
		Brain *brain;
};

#endif
