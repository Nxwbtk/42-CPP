/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:16:43 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/30 19:33:39 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cp)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = cp;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& cp)
{
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    if (this != &cp)
        this->_type = cp._type;
    return (*this);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}