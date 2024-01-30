/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:49:05 by bsirikam          #+#    #+#             */
/*   Updated: 2024/01/30 22:06:44 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <sstream>
# include <exception>
# include <cstdlib>

class RPN
{
	private:
		std::stack<int> _stack;
	public:
		RPN();
		RPN(RPN const & cp);
		~RPN();
		RPN & operator=(RPN const & cp);
		void	run(std::string input);
		void	split(std::string input);
	class InvalidInputException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Error: Invalid input");
			}
	};
};

#endif