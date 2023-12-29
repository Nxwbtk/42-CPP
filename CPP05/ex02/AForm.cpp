/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 00:15:30 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/29 18:26:05 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void): _gradeToSign(150), _gradeToExecute(150)
{

};

AForm::~AForm(void)
{

};

AForm::AForm(const AForm& cp): _name(cp._name), _gradeToSign(cp._gradeToSign), _gradeToExecute(cp._gradeToExecute)
{

};

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute): _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm& AForm::operator=(const AForm &cp)
{
	if (this != &cp)
	{
		this->_signed = cp._signed;
	}
	return (*this);
};

std::string AForm::getName(void) const
{
	return (this->_name);
};

bool	AForm::getSigned(void) const
{
	return (this->_signed);
};

int	AForm::getGradeToSign(void) const
{
	return (this->_gradeToSign);
};

int	AForm::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
};

void	AForm::beSigend(const Bureaucrat& bureaucrat)
{
	if (this->_gradeToSign >= bureaucrat.getGrade())
	{
		this->_signed = true;
	}
	else
	{
		this->_signed = false;
		throw GradeTooLowException();
	}
};

std::ostream&	operator<<(std::ostream &os, const AForm &form)
{
	os << "Form name: " << form.getName() << std::endl;
	os << "Grade require to sign: " << form.getGradeToSign() << std::endl;
	os << "Grade to execute: " << form.getGradeToExecute();
	return (os);
};