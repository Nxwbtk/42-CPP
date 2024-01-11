/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:07:14 by buntakansirikamo  #+#    #+#             */
/*   Updated: 2024/01/11 11:26:10 by buntakansirikamo ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void print (T &a)
{
    std::cout << a << std::endl;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };

  ::iter( tab, 5, print<const int> );
  return 0;
}