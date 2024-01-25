/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:03:28 by buntakansirikamo  #+#    #+#             */
/*   Updated: 2024/01/25 10:40:51 by buntakansirikamo ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

template <typename T>
void    easyfind(T& container, int n)
{
    typename    T::iterator res = find(container.begin(), container.end(), n);
    if (res == container.end())
        throw NotFoundException();
    else
        std::cout << "Found " << n << std::endl;
}

#endif
