/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:55:33 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/30 21:41:28 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
    this->_brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->_brain;
}

Dog::Dog(const Dog& cp)
{
    this->_brain = new Brain(*cp._brain);
    std::cout << "Dog copy constructor called" << std::endl;
    *this = cp;
}

Dog& Dog::operator=(const Dog& cp)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &cp)
    {
        delete this->_brain;
        this->_brain = new Brain(*cp._brain);
        this->_type = cp._type;
    }
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof Woof" << std::endl;
}