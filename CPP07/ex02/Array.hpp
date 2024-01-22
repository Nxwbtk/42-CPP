/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:42:31 by buntakansirikamo  #+#    #+#             */
/*   Updated: 2024/01/22 14:06:49 by buntakansirikamo ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template <typename T>
class Array
{
    private:
        T   *arr;
    public:
        Array();
        Array( unsigned int n );
        ~Array(void);
        Array( const Array & cp );
        Array & operator=( const Array & cp );
        class   OutOfRangeException: public std::exception
        {
            public:
                virtual char * what() const throw();
        };        
};

#endif