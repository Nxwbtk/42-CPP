/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:42:38 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/30 04:29:55 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string _name;
		int			_hitPoints;
		int 		_energyPoints;
		int 		_attackDamage;
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap& copy);
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hp, int ep, int atk);
		ClapTrap& operator=(const ClapTrap& copy);
		~ClapTrap(void);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif