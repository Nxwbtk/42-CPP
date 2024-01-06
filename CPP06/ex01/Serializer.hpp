/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 03:25:24 by buntakansirikamo  #+#    #+#             */
/*   Updated: 2024/01/07 03:52:07 by buntakansirikamo ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <cstdint>
# include "Data.hpp"

class Serializer
{
    public:
        Serializer(void);
        ~Serializer(void);
        Serializer( const Serializer & cp );
        Serializer & operator=( const Serializer &cp );
        static uintptr_t serialize( Data* ptr );
		static Data* deserialize( uintptr_t raw );
};

#endif