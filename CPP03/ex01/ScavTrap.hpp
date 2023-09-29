/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 02:44:28 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/30 02:59:46 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap
{
    public:
        ScavTrap( std::string name );
        ~ScavTrap(void);
        ScavTrap(const ScavTrap& copy);
        ScavTrap& operator=(const ScavTrap& copy);
};


#endif