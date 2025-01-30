/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:46:33 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/11 14:46:33 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int		size;
		int		index;
	public:
		PhoneBook();
		~PhoneBook();
		int		get_size(void) const;
		void	add_contact(std::string info[5]);
		void	display_contact(int i) const;
		void	display_phonebook(void) const;
};