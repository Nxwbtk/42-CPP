/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:45:16 by buntakansirikamo  #+#    #+#             */
/*   Updated: 2024/01/11 10:48:12 by buntakansirikamo ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T> void swap (T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T> T min (T &a, T &b)
{
    return (a < b ? a : b);
}

template <typename T> T max (T &a, T &b)
{
    return (a > b ? a : b);
}

#endif