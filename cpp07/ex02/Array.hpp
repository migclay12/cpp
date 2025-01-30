/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:33:18 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/12 17:16:41 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdexcept>

typedef std::string str;

template <typename T>
class Array
{
	private:
		T  *_array;
		int	_size;
	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array &cpy);
		Array &operator=(const Array &cpy);

		const T &operator[](int n) const;
		T		&operator[](int n);
		int		size();
		void	print(void);

		class OutOfBoundException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};
