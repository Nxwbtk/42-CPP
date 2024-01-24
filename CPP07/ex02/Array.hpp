/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:42:31 by buntakansirikamo  #+#    #+#             */
/*   Updated: 2024/01/24 13:31:15 by buntakansirikamo ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include "Array.tpp"

template <typename T>
class Array
{
    private:
        T				*arr;
        unsigned int	len;
    public:
        Array();
        Array( unsigned int n );
        ~Array(void);
        Array( const Array & cp );
        Array & operator=( const Array & cp );
		T & operator[](unsigned int i);
		unsigned int size() const;
        class   OutOfRangeException: public std::exception
        {
            public:
                virtual char * what() const throw();
        };        
};

#endif