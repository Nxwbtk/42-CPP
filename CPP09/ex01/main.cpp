/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:40:25 by bsirikam          #+#    #+#             */
/*   Updated: 2024/01/30 22:10:39 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	RPN rpn;
	if (ac < 2)
	{
		std::cout << "Error: No arguments" << std::endl;
		return (1);
	}
	if (ac > 2)
	{
		std::cout << "Error: Too many arguments" << std::endl;
		return (1);
	}
	try
	{
		rpn.run(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}