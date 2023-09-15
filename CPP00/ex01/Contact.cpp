/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:46:01 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/16 01:14:33 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void Contact::setFname(std::string fname)
{
	this->fname = fname;
}

void Contact::setLname(std::string lname)
{
	this->lname = lname;
}

void Contact::setPhone(std::string phone)
{
	this->phone = phone;
}

std::string	Contact::getFname(void)
{
	return (this->fname);
}

std::string	Contact::getLname(void)
{
	return (this->lname);
}

std::string	Contact::getPhone(void)
{
	return (this->phone);
}

void	Contact::setUser(int i, std::string fname, std::string lname, std::string phone)
{
	this->index = i;
	this->fname = fname;
	this->lname = lname;
	this->phone = phone;
}
