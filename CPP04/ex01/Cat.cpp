/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:08:21 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/30 21:40:54 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
    this->_brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->_brain;
}

Cat::Cat(const Cat& cp)
{
    this->_brain = new Brain(*cp._brain);
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cp;
}

Cat& Cat::operator=(const Cat& cp)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &cp)
    {
        delete this->_brain;
        this->_brain = new Brain(*cp._brain);
        this->_type = cp._type;
    }
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Meow Meow" << std::endl;
}