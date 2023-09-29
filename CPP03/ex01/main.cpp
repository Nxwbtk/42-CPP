/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:41:59 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/30 02:42:08 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap demo("hello");

	demo.attack("hello2");
	demo.takeDamage(5);
	demo.beRepaired(5);
	demo.takeDamage(5);
	demo.takeDamage(5);
	demo.takeDamage(5);
	demo.beRepaired(5);
    return 0;
}