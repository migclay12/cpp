/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:09:45 by miggonza          #+#    #+#             */
/*   Updated: 2024/11/11 16:09:45 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Contact {
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string number;
		std::string secret;
	public:
		const std::string&	get_firstname(void) const;
		const std::string&	get_lastname(void) const;
		const std::string&	get_nickname(void) const;
		const std::string&	get_number(void) const;
		const std::string&	get_secret(void) const;
		void				set_firstname(std::string firstname);
		void				set_lastname(std::string lastname);
		void				set_nickname(std::string nickname);
		void				set_number(std::string number);
		void				set_secret(std::string secret);
};
