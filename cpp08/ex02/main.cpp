/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggonza <miggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:42:07 by miggonza          #+#    #+#             */
/*   Updated: 2024/12/13 13:23:20 by miggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.tpp"

int main(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << "Top:\t "    << mstack.top() << std::endl;
	std::cout << "Size:\t "   << mstack.size() << std::endl;
	std::cout << "POP" << std::endl;
	mstack.pop();
	std::cout << "Size:\t "   << mstack.size() << std::endl;

	mstack.push(6);
	mstack.push(7);
	mstack.push(8);
	mstack.push(9);
	mstack.push(10);

	const MutantStack<int>& constMStack = mstack;
	MutantStack<int>::const_iterator cit = constMStack.begin();
	MutantStack<int>::const_iterator cite = constMStack.end();

	std::cout << "\n\x1b[36mConst Forward iterator\x1b[0m" << std::endl;
	while (cit != cite)
	{
		std::cout << *cit << std::endl;
		cit++;
	}

	MutantStack<int>::const_reverse_iterator crit = constMStack.rbegin();
	MutantStack<int>::const_reverse_iterator crite = constMStack.rend();

	std::cout << "\n\x1b[36mConst Reverse iterator\x1b[0m" << std::endl;
	while (crit != crite)
	{
		std::cout << *crit << std::endl;
		crit++;
	}    

	return 0;
}

/* int main()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();

	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::stack<int> s(mstack);
	return 0;
} */