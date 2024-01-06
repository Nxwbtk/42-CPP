/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 05:05:12 by bsirikam          #+#    #+#             */
/*   Updated: 2024/01/06 09:07:51 by buntakansirikamo ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

class	ScalarConverter
{
	public:
		ScalarConverter(void);
		ScalarConverter( const ScalarConverter & cp );
		~ScalarConverter(void);
		ScalarConverter & operator=( const ScalarConverter &cp );
		static void	convert( std::string str );
};

#endif