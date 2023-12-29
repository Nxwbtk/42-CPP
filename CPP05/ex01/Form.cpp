/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 00:15:30 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/29 11:53:58 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): _gradeToSign(150), _gradeToExecute(150)
{

};

Form::~Form(void)
{

};

Form::Form(const Form& cp): _name(cp._name), _gradeToSign(cp._gradeToSign), _gradeToExecute(cp._gradeToExecute)
{

};

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute): _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

Form& Form::operator=(const Form &cp)
{
	if (this != &cp)
	{
		this->_signed = cp._signed;
	}
	return (*this);
};

std::string Form::getName(void) const
{
	return (this->_name);
};

bool	Form::getSigned(void) const
{
	return (this->_signed);
};

int	Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
};

int	Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
};

void	Form::beSigend(const Bureaucrat& bureaucrat)
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

std::ostream&	operator<<(std::ostream &os, const Form &form)
{
	os << "Form name: " << form.getName() << std::endl;
	os << "Grade require to sign: " << form.getGradeToSign() << std::endl;
	os << "Grade to execute: " << form.getGradeToExecute();
	return (os);
};