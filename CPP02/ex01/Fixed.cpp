/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 01:29:47 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/24 04:26:56 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _fixpoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int num): _fixpoint(num << Fixed::_fractional_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fnum): _fixpoint(roundf(fnum * (1 << Fixed::_fractional_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_fixpoint / (1 << Fixed::_fractional_bits));
}

int		Fixed::toInt( void ) const
{
	return (this->_fixpoint >> Fixed::_fractional_bits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixpoint = raw;
}

int	Fixed::getRawBits(void) const
{
	return (this->_fixpoint);
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &fixed)
		this->setRawBits(fixed.getRawBits());
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}