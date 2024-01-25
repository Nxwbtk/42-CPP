/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 00:14:37 by bsirikam          #+#    #+#             */
/*   Updated: 2024/01/26 00:59:33 by bsirikam         ###   ########.fr       */
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