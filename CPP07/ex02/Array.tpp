/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:16:17 by buntakansirikamo  #+#    #+#             */
/*   Updated: 2024/01/23 10:05:22 by buntakansirikamo ###   ########.fr       */
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
    this->len = n;
    this->arr = new T[n];
}

template <typename T>
Array<T>::Array( const Array & cp )
{
    *this = cp;
}

template <typename T>
Array<T> & Array<T>::operator=( const Array<T> & cp )
{
    if (this != &cp)
    {
        this->len = cp.len;
        delete [] this->arr;
        this->arr = new T[cp.len];
        for (unsigned int i = 0; i < cp.len; i++)
            this->arr[i] = cp.arr[i];
    }
    return (*this);
}

template <typename T>
Array<T>::~Array(void)
{
    delete [] this->arr;
}

#endif
