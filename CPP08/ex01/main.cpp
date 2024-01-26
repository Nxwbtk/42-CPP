/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 21:35:08 by bsirikam          #+#    #+#             */
/*   Updated: 2024/01/26 22:48:23 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(7);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addManyNumber(vec.begin(), vec.end());
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return (0);
}
