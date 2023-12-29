/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 02:40:45 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/30 03:05:43 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
};

Intern::~Intern(void)
{
};

Intern::Intern( const Intern& cp )
{
	*this = cp;
};

Intern& Intern::operator=( const Intern& cp )
{
	(void)cp;
	return (*this);
};

AForm*	Intern::makeForm(std::string formName, std::string target)
{
	AForm* form;

	try{
		if (formName.compare("shrubbery") == 0)
		{
			form = new ShrubberyCreationForm(target);
		}
		else if (formName.compare("robotomy") == 0)
		{
			form = new RobotomyRequestForm(target);
		}
		else if (formName.compare("presidential") == 0)
		{
			form = new PresidentialPardonForm(target);
		}
		else
		{
			throw Intern::InvalidFormException();
		}
	}catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (NULL);
	}
	return (form);
};