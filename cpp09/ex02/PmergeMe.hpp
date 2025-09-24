/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:45:10 by miggonza          #+#    #+#             */
/*   Updated: 2025/02/17 13:40:31 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <deque>
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <cstdlib>

typedef std::string str;

template <typename T>
void print(const T &container)
{
    typename T::const_iterator it;
    
    for (it = container.begin(); it != container.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

template <typename T>
bool is_sorted(const T &container)
{
    if (container.empty())
        return (true);

    typename T::const_iterator prev = container.begin();
    typename T::const_iterator current = prev;
    current++;

    while (current != container.end())
    {
        if (*prev > *current)
            return (false);
        prev++;
        current++;
    }
    return (true);
}

void pmerge(std::vector<int> &vector);
void fordJohnsonSortVector(std::vector<int> &vec);
void fordJohnsonSortList(std::list<int> &lst);
std::list<int> fill_list(std::vector<int> &vector);
