/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:41:59 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/30 04:37:07 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap	demo("hello2");

	demo.attack("hello1");
	demo.takeDamage(50);
	demo.beRepaired(50);
	demo.takeDamage(50);
	demo.takeDamage(50);
	demo.takeDamage(50);
	demo.beRepaired(50);
    return 0;
}