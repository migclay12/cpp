/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:45:13 by miggonza          #+#    #+#             */
/*   Updated: 2025/02/11 15:09:15 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::list<int> fill_list(std::vector<int> &vector)
{
	std::list<int> new_list;

	for (size_t i = 0; i < vector.size(); i++)
		new_list.push_back(vector[i]);
	return (new_list);
}

double sort_list(std::vector<int> &vector)
{
	std::list<int> new_list = fill_list(vector);

	clock_t start = clock();
	if (!is_sorted(new_list))
		fordJohnsonSortList(new_list);
	return (static_cast<double>(clock() - start) / CLOCKS_PER_SEC);
}

double sort_vector(std::vector<int> &vector)
{
	std::vector<int> new_vector = vector;
	clock_t start = clock();

	if (!is_sorted(new_vector))
		fordJohnsonSortVector(new_vector);
	return (static_cast<double>(clock() - start) / CLOCKS_PER_SEC);
}

void print_numbers(std::vector<int> &vector)
{
	std::vector<int> aux = vector;
	std::list<int> new_list = fill_list(vector);

	std::cout << "Before: ";
	print(aux);
	std::cout << "After: \t";
	fordJohnsonSortVector(aux);
	print(aux);
	std::cout << "After: \t";
	fordJohnsonSortList(new_list);
	print(new_list);
}

void print_time(std::vector<int> &vector)
{
	std::cout	<< "Time to process a range of " << vector.size()
				<< " elements with std::vector: " << sort_vector(vector) << std::endl;
	std::cout 	<< "Time to process a range of " << vector.size()
				<< " elements with std::list: " << sort_list(vector) << std::endl;
}

void pmerge(std::vector<int> &vector)
{
	print_numbers(vector);
	print_time(vector);
}
