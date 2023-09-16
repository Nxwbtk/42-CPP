/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:56:28 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/16 23:42:44 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie = zombieHorde(8);
	for (int i = 0; i < 8; i++ )
	{
		std::cout << "Zombie " << i + 1 << ": ";
		zombie[i].announce();
	}
	delete [] zombie;
}