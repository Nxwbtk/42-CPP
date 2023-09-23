/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:50:06 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/23 16:27:57 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	enter(std::string av)
{
	int	j = -1;
	Harl	harl;

	std::string	level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 1; i <= 4; i++)
	{
		if (av.compare(level[i - 1]) == 0)
		{
			j = i;
			break ;
		}
	}
	harl.filter(j);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Usage: ./harl [DEBUG/INFO/WARNING/ERROR]" << std::endl;
		return (1);
	}
	enter(av[1]);
	return (0);
}