/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 00:14:37 by bsirikam          #+#    #+#             */
/*   Updated: 2024/01/26 22:42:35 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void): _n(0)
{
}

Span::Span(unsigned int n): _n(n) {}

Span::Span(Span const &cp)
{
	*this = cp;
}

Span::~Span(void)
{
}

bool	Span::validateAlreadyExist(int n)
{
	return (std::find(this->_vec.begin(), this->_vec.end(), n) != this->_vec.end());
}

void	Span::addNumber(int n)
{
	if (this->_vec.size() > this->_n)
	{
		throw Span::FullException();
	}
	if (!validateAlreadyExist(n))
	{
		this->_vec.push_back(n);
	}
	else
	{
		throw Span::AlreadyExistException();
	}
}

unsigned int	Span::shortestSpan(void)
{
	if (this->_vec.size() < 2)
	{
		throw Span::NoSpanException();
	}
	unsigned int min = UINT32_MAX;
	unsigned int tmp;
	std::vector<int>::iterator begin = this->_vec.begin();
	std::vector<int>::iterator end = this->_vec.end();
	std::sort(begin, end);
	std::vector<int>::iterator loop = this->_vec.begin() + 1;
	while (begin != end)
	{
		while (loop != end)
		{
			tmp = *loop - *begin;
			if (tmp < min)
			{
				min = tmp;
			}
			loop++;
		}
		begin++;
		if (begin == end)
		{
			break ;
		}
		loop = begin + 1;
	}
	return (min);
}

unsigned int	Span::longestSpan(void)
{
	if (this->_vec.size() < 2)
	{
		throw Span::NoSpanException();
	}
	std::vector<int>::iterator begin = this->_vec.begin();
	std::vector<int>::iterator end = this->_vec.end();
	unsigned int max = 0;
	std::sort(begin, end);
	max = *(end - 1) - *begin;
	return (max);
}

bool	Span::validateManyAlreadyExist(std::vector<int>::iterator begin, std::vector<int>::iterator end, unsigned int n)
{
	return (std::find(begin, end, n) != end);
}

void	Span::addManyNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (std::distance(begin, end) > this->_n)
	{
		throw Span::FullException();
	}
	std::vector<int>::iterator loop = begin;
	while (loop != end)
	{
		try
		{
			if (!validateManyAlreadyExist(this->_vec.begin(), this->_vec.end(), *loop))
			{
				this->_vec.push_back(*loop);
			}
			else
			{
				throw Span::AlreadyExistException();
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		loop++;
	}
}