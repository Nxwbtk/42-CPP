/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 06:04:15 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/30 18:13:42 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& cp)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = cp;
}

Animal::Animal(std::string type): _type(type)
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &cp)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &cp)
        this->_type = cp._type;
    return (*this);
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

void    Animal::makeSound(void) const
{
    std::cout << "Animal sound" << std::endl;
}