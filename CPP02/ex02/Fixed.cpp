/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 01:29:47 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/24 04:30:52 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _fixpoint(0)
{
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed::Fixed(const int num): _fixpoint(num << Fixed::_fractional_bits)
{
}

Fixed::Fixed(const float fnum): _fixpoint(roundf(fnum * (1 << Fixed::_fractional_bits)))
{
}

Fixed::~Fixed(void)
{
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
	if (this != &fixed)
		this->setRawBits(fixed.getRawBits());
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

bool	Fixed::operator>(const Fixed &fixed) const
{
	return (this->_fixpoint > fixed.getRawBits());
}

bool	Fixed::operator<(const Fixed &fixed) const
{
	return (this->_fixpoint < fixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
	return (this->_fixpoint >= fixed.getRawBits());
}

bool	Fixed::operator<=(const Fixed &fixed) const
{
	return (this->_fixpoint <= fixed.getRawBits());
}

bool	Fixed::operator==(const Fixed &fixed) const
{
	return (this->_fixpoint == fixed.getRawBits());
}

bool	Fixed::operator!=(const Fixed &fixed) const
{
	return (this->_fixpoint != fixed.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

Fixed	Fixed::operator-(const Fixed &fixed) const
{
	return (this->toFloat() - fixed.toFloat());
}

Fixed	Fixed::operator*(const Fixed &fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

Fixed	Fixed::operator/(const Fixed &fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}

Fixed	&Fixed::operator++(void)
{
	this->_fixpoint++;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed cp(*this);
	this->_fixpoint++;
	return (cp);
}

Fixed	&Fixed::operator--(void)
{
	this->_fixpoint--;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed cp(*this);
	this->_fixpoint--;
	return (cp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return (a <= b ? a : b);
}

Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a <= b ? (Fixed &)a : (Fixed &)b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return (a >= b ? a : b);
}

Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a >= b ? (Fixed &)a : (Fixed &)b);
}