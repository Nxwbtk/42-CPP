/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:41:13 by buntakansirikamo  #+#    #+#             */
/*   Updated: 2024/01/25 10:41:50 by buntakansirikamo ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <map>
#include <deque>
#include <set>
#include <iostream>

int main()
{
	int	n[10] = {4, 18, 20, 37, 43, 51, 68, 70, 83, 92};

	std::cout << "All number in array: ";
	for (int i = 0; i < 10; i++) {
		std::cout << n[i] << " ";
	}
	std::cout << std::endl << std::endl;

	std::cout << " =========== VECTOR ========== " << std::endl;
	std::vector<int> vec;
	for (int i = 0; i < 10; i++) {
		vec.push_back(n[i]);
	}
	try {
		std::cout << "value to search: " << 43 << std::endl;
		easyfind(vec, 43);
		std::cout << "value to search: " << 100 << std::endl;
		easyfind(vec, 100);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	vec.clear();
	std::cout << std::endl;


	std::cout << " =========== LIST ========== " << std::endl;
	std::list<int> lst;
	for (int i = 0; i < 10; i++) {
		lst.push_back(n[i]);
	}
	try {
		std::cout << "value to search: " << 37 << std::endl;
		easyfind(lst, 37);
		std::cout << "value to search: " << 64 << std::endl;
		easyfind(lst, 64);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	lst.clear();
	std::cout << std::endl;

	std::cout << " =========== DEQUE ========== " << std::endl;
	std::deque<int> deq;
	for (int i = 0; i < 10; i++) {
		deq.push_back(n[i]);
	}
	try {
		std::cout << "value to search: " << 70 << std::endl;
		easyfind(deq, 70);
		std::cout << "value to search: " << 1 << std::endl;
		easyfind(deq, 1);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	deq.clear();
	std::cout << std::endl;


	std::cout << " =========== SET ========== " << std::endl;
	std::set<int> st;
	for (int i = 0; i < 10; i++) {
		st.insert(n[i]);
	}
	try {
		std::cout << "value to search: " << 18 << std::endl;
		easyfind(st, 18);
		std::cout << "value to search: " << 91 << std::endl;
		easyfind(st, 91);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	st.clear();
	std::cout << std::endl;

	return 0;
}