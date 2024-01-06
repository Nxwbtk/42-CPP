/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 03:24:31 by buntakansir       #+#    #+#             */
/*   Updated: 2024/01/07 03:52:26 by buntakansirikamo ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
}

Serializer::~Serializer(void)
{
}

Serializer::Serializer( const Serializer & cp )
{
	*this = cp;
}

Serializer&	Serializer::operator=( const Serializer &cp )
{
	(void)cp;
	return (*this);
}

uintptr_t    Serializer::serialize( Data* ptr )
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize( uintptr_t raw )
{
	return (reinterpret_cast<Data*>(raw));
}