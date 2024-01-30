/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:21:36 by bsirikam          #+#    #+#             */
/*   Updated: 2024/01/31 00:19:55 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(PmergeMe const &cp)
{
	*this = cp;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe & PmergeMe::operator=(PmergeMe const &cp)
{
	if (this != &cp)
	{
	}
	return (*this);
}

void	PmergeMe::run(int ac, char **av)
{
	add_list(ac - 1, av + 1);
	std::cout << "Before sort: ";
	print_list(_list);
}

void	PmergeMe::add_list(int ac, char **av)
{
	for (int i = 0; i < ac; i++)
	{
		if (atoi(av[i]) < 0)
			throw IsNegativeException();
		_list.push_back(atoi(av[i]));
	}
}

void	PmergeMe::print_list(const std::list<int> &list)
{
	for (std::list<int>::const_iterator it = list.begin(); it != list.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}