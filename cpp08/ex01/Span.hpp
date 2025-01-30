/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:00:30 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/12 13:44:02 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>
#include <climits>
#include <algorithm>

class Span
{
	private:
		std::vector<int> _array;
		unsigned int	 _size;
		unsigned int 	 _maxSize;
	public:
		Span();
		~Span();
		Span(unsigned int num);
		Span(const Span &cpy);
		Span &operator=(const Span &cpy);

		void addNumber(int num);
		void addMultipleNumbers(int size);
		int shortestSpan();
		int longestSpan();

	class MaxSizeException : public std::exception
	{
		public:
			virtual const char * what() const throw();
	};
	class NoSpanException : public std::exception
	{
		public:
			virtual const char * what() const throw();
	};
	class MultiMaxSizeException : public std::exception
	{
		public:
			virtual const char * what() const throw();
	};
};
