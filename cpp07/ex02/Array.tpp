/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:35:45 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/11 17:08:32 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	_array = new T[0];
	_size = 0;
}

template<typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	_array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		_array[i] = T();
	_size = n;
}

template<typename T>
Array<T>::Array(const Array &cpy)
{
	_array = new T[cpy._size];
	_size = cpy._size;
	for (int i = 0; i < cpy._size; i++)
		_array[i] = cpy._array[i];
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &cpy)
{
	if (this != &cpy)
	{
		delete[] _array;
		_array = new T[cpy._size];
		_size = cpy._size;
		for (int i = 0; i < cpy._size; i++)
			_array[i] = cpy._array[i];
	}
	return (*this);
}

template<typename T>
const T &Array<T>::operator[](int n) const
{
	if (n >= _size || n < 0)
		throw Array::OutOfBoundException();
	return (_array[n]);
}

template<typename T>
T &Array<T>::operator[](int n)
{
	if (n >= _size || n < 0)
		throw (Array::OutOfBoundException());
	return (_array[n]);
}

template<typename T>
int Array<T>::size()
{
	return (_size);
}

template <class T>
const char* Array<T>::OutOfBoundException::what() const throw()
{
	return ("Index is out of bounds");
}

template <typename T>
void	Array<T>:: print(void)
{
	for (int i = 0; i < _size; i++)
		std::cout << "ID: [" << i << "] " << _array[i] << std::endl;
}
