/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 03:35:02 by bsirikam          #+#    #+#             */
/*   Updated: 2024/01/07 03:52:49 by buntakansirikamo ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data data;
    uintptr_t raw;
    Data *ptr;

    data.s1 = "Hello";
    data.n = 42;
    data.s2 = "World";
    raw = Serializer::serialize(&data);
    ptr = Serializer::deserialize(raw);
    std::cout << ptr->s1 << std::endl;
    std::cout << ptr->n << std::endl;
    std::cout << ptr->s2 << std::endl;
    return (0);
}