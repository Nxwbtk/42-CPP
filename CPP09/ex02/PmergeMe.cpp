/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:21:36 by bsirikam          #+#    #+#             */
/*   Updated: 2024/02/01 02:31:33 by bsirikam         ###   ########.fr       */
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
		_list = cp._list;
		_vector = cp._vector;
	}
	return (*this);
}

void	PmergeMe::run(int ac, char **av)
{
	add_list(ac - 1, av + 1);
	std::cout << "Before sort: ";
	print_list(_list);
	this->sort_list();
	this->sort_vector();
	std::cout << "After sort: ";
	print_list(result_list);
	this->print_time();
}

void	PmergeMe::print_time(void)
{
	std::cout << "Time to process a range of " << _count << " elements with std::list: " << std::fixed << this->time_ls << " us" << std::endl;
	std::cout << "Time to process a range of " << _count << " elements with std::vector: " << std::fixed << this->time_vector << " us" << std::endl;
}

void	PmergeMe::add_list(int ac, char **av)
{
	for (int i = 0; i < ac; i++)
	{
		if (atoi(av[i]) < 0)
			throw IsNegativeException();
		_list.push_back(atoi(av[i]));
		_vector.push_back(atoi(av[i]));
	}
	_count = _list.size();
}

void	PmergeMe::print_list(const std::list<int> &list)
{
	for (std::list<int>::const_iterator it = list.begin(); it != list.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::print_vector(const std::vector<int> &vector)
{
	for (std::vector<int>::const_iterator it = vector.begin(); it != vector.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

int	PmergeMe::count_list_part(int size)
{
	int	res = 0;
	int	len = size / 2;
	while (len >= 2)
	{
		res++;
		len /= 2;
	}
	return (res);
}

void	PmergeMe::sort_list(void)
{
	clock_t	start = clock();
	this->merge_list();
	this->insert_list();
	clock_t finish = clock();
	this->time_ls = double(finish - start);
}

int	PmergeMe::min_list(const std::list<int> &list)
{
	std::list<int>::const_iterator	it = list.begin();
	int	min = *it;
	while (it != list.end())
	{
		if (min > *it)
			min = *it;
		it++;
	}
	return (min);
}

void	PmergeMe::insert_list(void)
{
	int	min = 0;
	while (!this->_list.empty())
	{
		min = this->min_list(this->_list);
		this->result_list.push_back(min);
		this->delete_list(this->_list, min);
	}
}

void	PmergeMe::merge_list(void)
{
	std::list<int>::iterator	left;
	std::list<int>::iterator	right;
	std::list<int>::iterator	templeft;
	std::list<int>::iterator	tempright;
	int	size = count_list_part(this->_list.size());
	left = right = templeft = tempright = this->_list.begin();
	this->move_list(templeft, 1);
	this->move_list(right, this->_list.size() / 2);
	this->move_list(tempright, this->_list.size() / 2 + 1);
	for (int i = 0; i < size; i++)
	{
		if (*left > *templeft || *right > *tempright)
		{
			if (*left > *templeft)
				iter_swap(left, templeft);
			if (*right > *tempright)
				iter_swap(right, tempright);
			this->move_list(left, 2);
			this->move_list(templeft, 2);
			this->move_list(right, 2);
			this->move_list(tempright, 2);
		}
	}
}

void	PmergeMe::move_list(std::list<int>::iterator &it, int position)
{
	for (int i = 0; i < position; i++)
	{
		it++;
	}
}

void	PmergeMe::delete_list(std::list<int> &ls, int value)
{
	std::list<int>::iterator	it = ls.begin();

	while (it != ls.end())
	{
		if (*it == value)
		{
			ls.erase(it);
			break ;
		}
		it++;
	}
}

void	PmergeMe::sort_vector(void)
{
	clock_t	start = clock();
	this->merge_vector();
	this->insert_vector();
	clock_t finish = clock();
	this->time_vector = double(finish - start);
}

void	PmergeMe::merge_vector(void)
{
	std::vector<int>::iterator	left;
	std::vector<int>::iterator	right;
	std::vector<int>::iterator	templeft;
	std::vector<int>::iterator	tempright;
	int	size = count_vector_part(this->_vector.size());
	left = right = templeft = tempright = this->_vector.begin();
	this->move_vector(templeft, 1);
	this->move_vector(right, this->_vector.size() / 2);
	this->move_vector(tempright, this->_vector.size() / 2 + 1);
	for (int i = 0; i < size; i++)
	{
		if (*left > *templeft || *right > *tempright)
		{
			if (*left > *templeft)
				iter_swap(left, templeft);
			if (*right > *tempright)
				iter_swap(right, tempright);
			this->move_vector(left, 2);
			this->move_vector(templeft, 2);
			this->move_vector(right, 2);
			this->move_vector(tempright, 2);
		}
	}
}

int	PmergeMe::count_vector_part(int size)
{
	int	res = 0;
	int	len = size / 2;
	while (len >= 2)
	{
		res++;
		len /= 2;
	}
	return (res);
}

void	PmergeMe::move_vector(std::vector<int>::iterator &it, int position)
{
	for (int i = 0; i < position; i++)
	{
		it++;
	}
}

void	PmergeMe::insert_vector(void)
{
	int	min = 0;
	while (!this->_vector.empty())
	{
		min = this->min_vector(this->_vector);
		this->result_vector.push_back(min);
		this->delete_vector(this->_vector, min);
	}
}

int	PmergeMe::min_vector(const std::vector<int> &vector)
{
	std::vector<int>::const_iterator	it = vector.begin();
	int	min = *it;
	while (it != vector.end())
	{
		if (min > *it)
			min = *it;
		it++;
	}
	return (min);
}

void	PmergeMe::delete_vector(std::vector<int> &vector, int value)
{
	std::vector<int>::iterator	it = vector.begin();

	while (it != vector.end())
	{
		if (*it == value)
		{
			vector.erase(it);
			break ;
		}
		it++;
	}
}