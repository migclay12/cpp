/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:11:09 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/25 17:18:03 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "AAnimal.hpp"

class Brain
{
	private:
		str ideas[100];
	public:
		Brain();
		Brain(const Brain &cpy);
		virtual ~Brain();
		Brain &operator=(const Brain &cpy);
		void 	setIdea(int id, str idea);
		str		getIdea(int id);
};

#endif
