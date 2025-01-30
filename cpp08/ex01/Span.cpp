/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:02:46 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/13 13:22:14 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	_maxSize = 0;
	_size = 0;
}

Span::~Span()
{
}

Span::Span(unsigned int N)
{
	_maxSize = N;
	_size = 0;
}

Span::Span(const Span &cpy)
{
	_array = cpy._array;
	_maxSize = cpy._maxSize;
	_size = cpy._size;
}

Span &Span::operator=(const Span &cpy)
{
	if (this != &cpy)
	{
		_array = cpy._array;
		_maxSize = cpy._maxSize;
		_size = cpy._size;
	}
	return (*this);
}

void Span::addNumber(int num)
{
	if (_size + 1 > _maxSize)
		throw (MaxSizeException());
	_array.push_back(num);
	_size++;
}

void Span::addMultipleNumbers(int size)
{
	if (_size + size > _maxSize)
		throw (MultiMaxSizeException());

	int num = 0;
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		num = rand();
		addNumber(num);
		if (size <= 100)
			std::cout << _size << " / " << _maxSize << " : " << num << std::endl;
	}
}

int Span::shortestSpan()
{
	if (!_array.size() || _array.size() == 1)
		throw (NoSpanException());

	std::vector<int> list(_array);
	
	if (!list.size() || list.size() == 1)
		throw (NoSpanException());

	int min = INT_MAX;
	std::vector<int>::iterator it;
	std::vector<int>::iterator iter = list.end();

	std::sort(list.begin(), list.end());

	for (it = list.begin(); it != iter - 1; it++)
	{
		if ((*(it + 1) - *it) < min)
			min = (*(it + 1) - *it);
	}
	return (min);
}

int Span::longestSpan()
{
	if (!_array.size() || _array.size() == 1)
		throw (NoSpanException());

	int min = *std::min_element(_array.begin(), _array.end());
	int max = *std::max_element(_array.begin(), _array.end());;
	return (max - min);
}

const char *Span::MaxSizeException::what() const throw()
{
	return("Can't add another number, max size has been reached");
}

const char *Span::NoSpanException::what() const throw()
{
	return("No span can be found");
}

const char *Span::MultiMaxSizeException::what() const throw()
{
	return("Can't add a list of numbers, max size has been reached");
}
