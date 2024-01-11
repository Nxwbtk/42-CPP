/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:54:24 by buntakansirikamo  #+#    #+#             */
/*   Updated: 2024/01/11 11:25:00 by buntakansirikamo ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter (T *arr, int len, void (*f)(T &))
{
    for (int i = 0; i < len; i++)
        f(arr[i]);
}

template <typename T, typename A>
void iter (T *arr, int len, void (*f)(A &))
{
    for (int i = 0; i < len; i++)
        f(arr[i]);
}

#endif