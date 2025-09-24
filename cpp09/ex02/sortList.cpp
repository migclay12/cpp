/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortList.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:40:27 by miggonza          #+#    #+#             */
/*   Updated: 2025/02/17 14:07:15 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	merge(std::list<int>& left, std::list<int>& right, std::list<int>& result)
{
	std::list<int>::iterator leftIt = left.begin();
	std::list<int>::iterator rightIt = right.begin();

	while (leftIt != left.end() && rightIt != right.end())
	{
		if (*leftIt < *rightIt)
			result.push_back(*leftIt++);
		else
			result.push_back(*rightIt++);
	}
	while (leftIt != left.end())
		result.push_back(*leftIt++);
	while (rightIt != right.end())
		result.push_back(*rightIt++);
}

void	fordJohnsonSortList(std::list<int>& lst)
{
	if (lst.size() <= 1)
		return ;

	std::list<int> leftHalf, rightHalf;
	std::list<int>::iterator middle = lst.begin();

	std::advance(middle, lst.size() / 2);
	leftHalf.splice(leftHalf.begin(), lst, lst.begin(), middle);
	rightHalf.splice(rightHalf.begin(), lst, middle, lst.end());

	fordJohnsonSortList(leftHalf);
	fordJohnsonSortList(rightHalf);

	merge(leftHalf, rightHalf, lst);
}
