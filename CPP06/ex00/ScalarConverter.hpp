/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 05:05:12 by bsirikam          #+#    #+#             */
/*   Updated: 2024/01/07 00:01:00 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cstdlib>
# include <sstream>
# include <iomanip>

class	ScalarConverter
{
	public:
		ScalarConverter(void);
		ScalarConverter( const ScalarConverter & cp );
		~ScalarConverter(void);
		ScalarConverter & operator=( const ScalarConverter &cp );
		static void	convert( std::string str );
		static void	convertChar( double num );
		static void convertInt( double num );
		static void convertFloat( double num );
		static void convertDouble( double num );
};

#endif