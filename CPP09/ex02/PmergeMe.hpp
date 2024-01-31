/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:17:04 by bsirikam          #+#    #+#             */
/*   Updated: 2024/02/01 00:41:26 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <exception>
# include <vector>
# include <cstdlib>
# include <list>
# include <ctime>

class PmergeMe
{
	private:
		std::list<int> _list;
		std::vector<int> _vector;
		double	time_ls;
		double	time_vector;
	public:
		PmergeMe();
		PmergeMe(PmergeMe const &cp);
		~PmergeMe();
		PmergeMe &operator=(PmergeMe const &cp);
		void	run(int ac, char **av);
		void	add_list(int ac, char **av);
		void	print_list(const std::list<int> &list);
		void	print_vector(const std::vector<int> &vector);
		void	sort_list(void);
		int		count_list_part(int size);
		void	merge_list(void);
		void	move_list(std::list<int>::iterator &it, int position);
	class IsNegativeException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Error: Negative number");
			}
	};
};

#endif