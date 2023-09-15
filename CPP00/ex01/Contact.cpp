/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:46:01 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/15 17:14:37 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void	Contact::setUser(int i, std::string fname, std::string lname, std::string phone)
{
	this->index = i;
	this->fname = fname;
	this->lname = lname;
	this->phone = phone;
}