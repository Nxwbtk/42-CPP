/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:17:02 by bsirikam          #+#    #+#             */
/*   Updated: 2024/01/30 23:16:02 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	isNumber(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

int	main(int ac, char **av)
{
	PmergeMe	pmergeMe;

	if (ac < 2)
	{
		std::cout << "Error: No arguments" << std::endl;
		return (1);
	}
	for (int i = 1; i < ac; i++)
	{
		if (!isNumber(av[i]))
		{
			std::cout << "Error: Invalid argument" << std::endl;
			return (1);
		}
	}
	try
	{
		pmergeMe.run(ac, av);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}