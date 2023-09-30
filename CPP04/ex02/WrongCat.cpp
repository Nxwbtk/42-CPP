/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:43:48 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/30 19:49:37 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& cp)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    if (this != &cp)
        this->_type = cp._type;
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "WrongCat sound" << std::endl;
}