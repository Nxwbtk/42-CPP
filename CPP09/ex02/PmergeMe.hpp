/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:17:04 by bsirikam          #+#    #+#             */
/*   Updated: 2024/02/01 02:29:04 by bsirikam         ###   ########.fr       */
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
# include <iterator>
# include <algorithm>
# include <iomanip>

class PmergeMe
{
	private:
		std::list<int> _list;
		std::vector<int> _vector;
		std::list<int>	result_list;
		std::vector<int> result_vector;
		int _count;
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
		void	insert_list(void);
		int		min_list(const std::list<int> &list);
		void	delete_list(std::list<int> &ls, int value);
		void	print_time(void);
		void	sort_vector(void);
		int		count_vector_part(int size);
		void	merge_vector(void);
		void	move_vector(std::vector<int>::iterator &it, int position);
		void	insert_vector(void);
		int		min_vector(const std::vector<int> &vector);
		void	delete_vector(std::vector<int> &vector, int value);
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