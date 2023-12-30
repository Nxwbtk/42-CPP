/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 05:05:12 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/30 05:14:21 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

class	ScalarConverter
{
	public:
		ScalaConverter(void);
		ScalaConverter( const ScalarConverter & cp );
		~ScalaConverter(void);
		ScalarConverter & operator=( const ScalarConverter &cp );
		static void	convert( std::string str );
};

#endif