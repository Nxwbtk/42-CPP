/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:51:52 by bsirikam          #+#    #+#             */
/*   Updated: 2024/01/26 23:45:01 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack( MutantStack const & cp )
		{
			*this = cp;
		}
		~MutantStack() {}
		MutantStack &	operator=( MutantStack const & cp )
		{
			if (this != &cp)
			{
				std::stack<T>::operator=(cp);
			}
			return (*this);
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin()
		{
			return (std::stack<T>::c.begin());
		}
		iterator	end()
		{
			return (std::stack<T>::c.end());
		}
};

#endif