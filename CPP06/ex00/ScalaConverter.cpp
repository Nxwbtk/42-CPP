/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalaConverter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 05:04:56 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/30 05:12:47 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalaConverter.hpp"

ScalaConverter::ScalaConverter(void)
{
}

ScalaConverter::ScalaConverter( const ScalaConverter & cp )
{
	*this = cp;
}

ScalaConverter::~ScalaConverter(void)
{
}

ScalaConverter&	operator=( const ScalaConverter &cp )
{
	(void)cp;
	return (*this);
}