/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 00:04:55 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/16 09:57:46 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
}

PhoneBook::~PhoneBook(void)
{
}

int	PhoneBook::menu(void)
{
	std::string input;
	std::cout << "************************************" << std::endl;
	std::cout << "* Welcome to my awesome phonebook! *" << std::endl;
	std::cout << "*      Please enter your menu:     *" << std::endl;
	std::cout << "*              1.ADD               *" << std::endl;
	std::cout << "*              2.SEARCH            *" << std::endl;
	std::cout << "*              3.EXIT              *" << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "Enter your menu: ";
	if (!std::getline(std::cin, input)) return (0);
	if (!input.compare("1") || !input.compare("ADD") || !input.compare("add"))
		return (1);
	else if (!input.compare("2") || !input.compare("SEARCH") || !input.compare("search"))
		return (2);
	else if (!input.compare("3") || !input.compare("EXIT") || !input.compare("exit"))
		return (0);
	else
	{
		std::cout << "What are you doing???? Please enter only 1, 2 or 3." << std::endl;
		return (-1);
	}
}

void	PhoneBook::run(void)
{
	int res = 1;
	while (res)
	{
		res = this->menu();
		if (!res)
			return ;
		else if (res == 1)
		{
			if (!this->add())
				return ;
		}
		else if (res == 2)
			this->search();
	}
}



void	PhoneBook::search(void)
{
	int	i = 0;
	std::cout << "============================================================" << std::endl;
	std::cout << "|" << std::setw(10) << "Index" << "|";
	std::cout << std::setw(15) << "First Name" << "|";
	std::cout << std::setw(15) << "Last Name" << "|";
	std::cout << std::setw(15) << "Phone" << "|" << std::endl;
	std::cout << "============================================================" << std::endl;
	while (i < 8)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(15) <<  ((contact[i].getFname().length() > 10) ? contact[i].getFname().substr(0, 9) + "." : contact[i].getFname().substr(0, 10)) << "|";
		std::cout << std::setw(15) <<((contact[i].getLname().length() > 10) ? contact[i].getLname().substr(0, 9) + "." : contact[i].getLname().substr(0, 10)) << "|";
		std::cout << std::setw(15) << contact[i].getPhone().substr(0, 10) << "|" << std::endl;
		i++;
	}
	std::cout << "============================================================" << std::endl;
}

std::string	PhoneBook::inputStrCheck(std::string msg)
{
	int res = 1;
	int	i = 0;
	std::string str;
	while (res)
	{
		std::cout << msg;
		if (!std::getline(std::cin, str)) return ("");
		res = 0;
		while (str[i])
		{
			if (!isalpha(str[i]))
			{
				res = 1;
				std::cout << "You stupid or what? Please enter only alphabet." << std::endl;
				break;
			}
			i++;
		}
	}
	return (str);
}

std::string	PhoneBook::inputNumCheck(std::string msg, unsigned long max, unsigned long min)
{
	int res = 1;
	int	i = 0;
	std::string str;
	while (res)
	{
		std::cout << msg;
		if (!std::getline(std::cin, str)) return ("");
		res = 0;
		while (str[i])
		{
			if (isalpha(str[i]))
			{
				res = 1;
				std::cout << "You stupid or what? Please enter only number." << std::endl;
				break;
			}
			i++;
		}
	}
	if (str.length() > max || str.length() < min)
	{
		std::cout << "Please enter only 10 digit."<< std::endl;
		return (this->inputNumCheck(msg, max, min));
	}
	return (str);
}

void	PhoneBook::clean(void)
{
	std::cout.flush();
	std::cin.ignore();
}

int	PhoneBook::add(void)
{
	system("clear || cls");
	std::string fname;
	std::string lname;
	std::string phone;
	if (this->index == 8)
		this->index = 0;
	std::cout << "ADD User" << std::endl;
	fname = this->inputStrCheck("Enter First Name: ");
	if (fname.compare("") == 0)
	{
		this->clean();
		return (0);
	}
	lname = this->inputStrCheck("Enter Last Name: ");
	if (lname.compare("") == 0)
	{
		this->clean();
		return (0);
	}
	phone = this->inputNumCheck("Enter Phone Number: ", 10, 10);
	if (phone.compare("") == 0)
	{
		this->clean();
		return (0);
	}
	this->contact[this->index].setFname(fname);
	this->contact[this->index].setLname(lname);
	this->contact[this->index].setPhone(phone);
	this->index++;
	// this->clean(); It's must enter to continue.
	return (1);
}