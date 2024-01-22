/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:16:17 by buntakansirikamo  #+#    #+#             */
/*   Updated: 2024/01/22 14:00:11 by buntakansirikamo ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
Array<T>::Array()
{
    this->arr = new T[0];
}

template <typename T>
Array<T>::Array( unsigned int n )
{
    this->arr = new T[n];
}

template <typename T>
Array<T>::Array( const Array & cp )
{
    *this = cp;
}

template <typename T>
Array<T>::~Array(void)
{
    delete [] this->arr;
}

#endif
