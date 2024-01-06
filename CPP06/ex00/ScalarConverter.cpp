/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 10:06:37 by buntakansirikamo  #+#    #+#             */
/*   Updated: 2024/01/06 14:17:14 by buntakansirikamo ###   ########.fr       */
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

void	ScalarConverter::convert( std::string str )
{
	char	*endptr;
	double	num;

	num = std::strtod(str.c_str(), &endptr);
	convertChar(num);
	convertInt(num);
}

void	ScalarConverter::convertChar( double num )
{
	char				c;
	std::stringstream	ss;
	if (isnan(num))
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	if (isprint(num))
	{
		c = static_cast<char>(num);
		ss << c;
		std::cout << "char: " << ss.str() << std::endl;
		return ;
	}
	std::cout << "char: Non displayable" << std::endl;
}

void	ScalarConverter::convertInt( double num )
{
	if (isnan(num) || isinf(num))
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	std::cout << "int: " << num << std::endl;
}

void	ScalarConverter::convertFloat( double num )
{
	if (isnan(num) || isinf(num))
	{
		std::cout << "float: " << num << "f" << std::endl;
		return ;
	}
}