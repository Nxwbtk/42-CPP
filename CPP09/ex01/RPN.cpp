/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:49:57 by bsirikam          #+#    #+#             */
/*   Updated: 2024/01/30 22:13:12 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(RPN const & cp)
{
	*this = cp;
}

RPN::~RPN()
{
}

RPN & RPN::operator=(RPN const & cp)
{
	if (this != &cp)
	{
		this->_stack = cp._stack;
	}
	return (*this);
}

void	RPN::split(std::string input)
{
	std::stringstream ss(input);
    std::string token;
	int top1;
	int top2;

    while (std::getline(ss, token, ' '))
	{
		if (token.length() > 1 || isalpha(token[0]))
		{
			throw InvalidInputException();
		}
		if (token.length() == 1 && isdigit(token[0]))
		{
			this->_stack.push(atoi(token.c_str()));
		}
		switch (token[0])
		{
			case '+':
				if (this->_stack.size() < 2)
				{
					throw InvalidInputException();
				}
				top1 = this->_stack.top();
				this->_stack.pop();
				top2 = this->_stack.top();
				this->_stack.pop();
				this->_stack.push(top1 + top2);
				break;
			case '-':
				if (this->_stack.size() < 2)
				{
					throw InvalidInputException();
				}
				top1 = this->_stack.top();
				this->_stack.pop();
				top2 = this->_stack.top();
				this->_stack.pop();
				this->_stack.push(top2 - top1);
				break;
			case '*':
				if (this->_stack.size() < 2)
				{
					throw InvalidInputException();
				}
				top1 = this->_stack.top();
				this->_stack.pop();
				top2 = this->_stack.top();
				this->_stack.pop();
				this->_stack.push(top1 * top2);
				break;
			case '/':
				if (this->_stack.size() < 2)
				{
					throw InvalidInputException();
				}
				top1 = this->_stack.top();
				this->_stack.pop();
				top2 = this->_stack.top();
				this->_stack.pop();
				if (top1 == 0)
				{
					throw InvalidInputException();
				}
				this->_stack.push(top2 / top1);
				break;
		}
	}
}

void	RPN::run(std::string input)
{
	split(input);
	if (this->_stack.size() != 1)
	{
		throw InvalidInputException();
	}
	std::cout << this->_stack.top() << std::endl;
}