/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:58:38 by buntakansirikamo  #+#    #+#             */
/*   Updated: 2024/01/24 15:00:00 by buntakansirikamo ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

template <typename T>
class Easyfind
{
    public:
        Easyfind(void);
        Easyfind(const Easyfind & cp);
        Easyfind & operator=(const Easyfind & cp);
        ~Easyfind(void);
};

#endif