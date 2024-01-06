/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalaConverter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 05:04:56 by bsirikam          #+#    #+#             */
/*   Updated: 2024/01/06 09:08:28 by buntakansirikamo ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
}

ScalarConverter::ScalarConverter( const ScalarConverter & cp )
{
	*this = cp;
}

ScalarConverter::~ScalarConverter(void)
{
}

ScalarConverter&	ScalarConverter::operator=( const ScalarConverter &cp )
{
	(void)cp;
	return (*this);
}