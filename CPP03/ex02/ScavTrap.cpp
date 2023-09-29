/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 02:44:24 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/30 04:37:38 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ): ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy) {}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
    }
    return (*this);
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap has enterred in Gate keeper mode" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " no more energy point. Can't attack" << std::endl;
		return ;
	}
	this->_energyPoints -= 1;
	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}