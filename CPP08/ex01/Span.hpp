/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 00:14:47 by bsirikam          #+#    #+#             */
/*   Updated: 2024/01/26 00:59:31 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>

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
		bool				validateAlreadyExist(int n);
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
};

#endif