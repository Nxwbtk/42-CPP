/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 00:13:02 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/26 10:27:59 by buntakansirikamo ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& cp)
{
	*this = cp;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, const int &grade): _name(name), _grade(grade)
{
	if (this->_grade < 1)
	{
		throw GradeTooHighException();
	}
	else if (this->_grade > 150)
	{
		throw GradeTooLowException();
	}
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &cp)
{
	if (this != &cp)
	{
		this->_grade = cp._grade;
	}
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int		Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade == 1)
	{
		throw GradeTooHighException();
	}
	this->_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade == 150)
	{
		throw GradeTooLowException();
	}
	this->_grade++;
}

void	Bureaucrat::signForm(Form& form)
{
	try {
		form.beSigend(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	} catch (const std::exception& e) {
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream &os, const Bureaucrat &Bureaucrat)
{
	os << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << std::endl;
	return (os);
}