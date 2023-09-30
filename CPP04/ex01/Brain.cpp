/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:49:27 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/30 21:48:08 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain constructor called" << std::endl;   
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;   
}

Brain::Brain(const Brain& cp)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
        ideas[i] = cp.ideas[i];
}

Brain& Brain::operator=(const Brain& cp)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &cp)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = cp.ideas[i];
    }
    return (*this);
}