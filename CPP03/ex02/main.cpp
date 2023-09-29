/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:41:59 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/30 05:04:22 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap	demo("hello3");

	demo.attack("hello1");
	demo.attack("hello2");
	demo.takeDamage(50);
	demo.beRepaired(50);
	demo.takeDamage(50);
	demo.takeDamage(50);
	demo.takeDamage(50);
	demo.beRepaired(50);
	demo.highFivesGuys();
    return 0;
}