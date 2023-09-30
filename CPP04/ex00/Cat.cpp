/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:08:21 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/30 18:38:59 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& cp)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cp;
}

Cat& Cat::operator=(const Cat& cp)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &cp)
        this->_type = cp._type;
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Meow Meow" << std::endl;
}