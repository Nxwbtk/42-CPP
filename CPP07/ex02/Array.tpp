/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:16:17 by buntakansirikamo  #+#    #+#             */
/*   Updated: 2024/01/24 13:34:32 by buntakansirikamo ###   ########.fr       */
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
        this->len = cp.size();
        delete [] this->arr;
        this->arr = new T[cp.size()];
        for (unsigned int i = 0; i < cp.size(); i++)
            this->arr[i] = cp.arr[i];
    }
    return (*this);
}

template <typename T>
Array<T>::~Array(void)
{
    delete [] this->arr;
}

template <typename T>
T & Array<T>::operator[](unsigned int i)
{
    if (i >= this->len)
        throw OutOfRangeException();
    return (this->arr[i]);
}

template <typename T>
const char * Array<T>::OutOfRangeException::what() const throw()
{
    return ("Out of range");
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (this->len);
}

#endif
