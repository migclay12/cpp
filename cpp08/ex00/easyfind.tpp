/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:01:45 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/13 12:58:44 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

const char *NonFoundException::what() const throw()
{
	return("No match has been found");
}

template <typename T>
int easyFind(T &array, int num)
{
	typename T::const_iterator it = std::find(array.begin(), array.end(), num);

	if (it != array.end())
		return (*it);

	throw (NonFoundException());
}
