/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:26:18 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/10 22:33:51 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int	menu(void)
{
	string input;
	system("clear || cls");
	cout << "************************************" << endl;
	cout << "* Welcome to my awesome phonebook! *" << endl;
	cout << "*      Please enter your menu:     *" << endl;
	cout << "*              1.ADD               *" << endl;
	cout << "*              2.SEARCH            *" << endl;
	cout << "*              3.EXIT              *" << endl;
	cout << "************************************" << endl;
	cout << "Enter your menu: ";
	cin >> input;
	if (!input.compare("1") || !input.compare("ADD") || !input.compare("add"))
		return (1);
	else if (!input.compare("2") || !input.compare("SEARCH") || !input.compare("search"))
		return (2);
	else if (!input.compare("3") || !input.compare("EXIT") || !input.compare("exit"))
		return (0);
	else
	{
		cout << "What are you doing???? Please enter only 1, 2 or 3." << endl;
		return (-1);
	}
}

int main(void)
{
	int res = menu();
	if (res == -1)
		return (0);

	return (0);
}