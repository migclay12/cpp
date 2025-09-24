/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortVector.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:36:40 by miggonza          #+#    #+#             */
/*   Updated: 2025/02/17 14:12:02 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void pairwiseSort(std::vector<int> &arr, std::vector<int> &pairs)
{
	std::vector<int> smalls;
	size_t i;
	for (i = 0; i + 1 < arr.size(); i += 2)
	{
		if (arr[i] > arr[i + 1])
			std::swap(arr[i], arr[i + 1]);
		smalls.push_back(arr[i]);
		pairs.push_back(arr[i + 1]);
	}
	if (arr.size() % 2 != 0)
		smalls.push_back(arr[i]);
	arr = smalls;
}

void orderedInsertion(std::vector<int> &sorted, int value)
{
	std::vector<int>::iterator it = sorted.begin();
	while (it != sorted.end() && *it < value)
		++it;
	sorted.insert(it, value);
}

void fordJohnsonSortVector(std::vector<int> &arr)
{
	if (arr.size() <= 1)
		return;

	std::vector<int> pairs;
	pairwiseSort(arr, pairs);

	if (!pairs.empty())
		fordJohnsonSortVector(pairs);

	std::vector<int> sorted = pairs;
	for (size_t i = 0; i < arr.size(); ++i)
		orderedInsertion(sorted, arr[i]);

	arr = sorted;
}
