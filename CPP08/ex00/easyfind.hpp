/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:58:38 by buntakansirikamo  #+#    #+#             */
/*   Updated: 2024/01/25 10:40:42 by buntakansirikamo ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

class   NotFoundException: public std::exception
{
    virtual const char* what() const throw()
    {
        return ("Not found");
    }
};

template <typename T>
void    easyfind(T& container, int n);

# include "easyfind.tpp"

#endif