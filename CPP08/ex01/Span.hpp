/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 00:14:47 by bsirikam          #+#    #+#             */
/*   Updated: 2024/01/26 22:37:54 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>
# include <iostream>
# include <exception>
# include <stdint.h>

class Span
{
	private:
		unsigned int		_n;
		std::vector<int>	_vec;
	public:
		Span(void);
		Span(unsigned int n);
		Span(Span const &cp);
		~Span(void);
		void				addNumber(int n);
		void				addManyNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		bool				validateAlreadyExist(int n);
		bool				validateManyAlreadyExist(std::vector<int>::iterator begin, std::vector<int>::iterator end, unsigned int n);
		unsigned int		shortestSpan(void);
		unsigned int		longestSpan(void);
	class FullException: public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("Container is full");
		}
	};

	class AlreadyExistException: public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("Number already exist");
		}
	};

	class NoSpanException: public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("No span to find");
		}
	};
};

#endif