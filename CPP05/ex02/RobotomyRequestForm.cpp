/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 01:19:17 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/30 01:50:21 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cp): AForm(cp.getName(), cp.getGradeToSign(), cp.getGradeToExecute()), _target(cp._target)
{
};

RobotomyRequestForm::~RobotomyRequestForm(void)
{
};

RobotomyRequestForm::RobotomyRequestForm( const std::string &target ): AForm("RobotomyRequestForm", 72, 45), _target(target)
{
};

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &cp)
{
	if (this != &cp)
	{
		this->_target = cp._target;
	}
	return (*this);
};

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
};

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	if (!this->getSigned())
		throw NotSignedException();
	if (this->getGradeToExecute() < executor.getGrade())
		throw GradeTooLowException();
	this->robotomize();
};

void	RobotomyRequestForm::robotomize(void) const
{
	std::cout << "* Drill Sound: Brrrtttt *" << std::endl;
	srand(time(NULL));
	if (rand() % 2)
	{
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	}
	else
	{
		std::cout << this->getTarget() << " has been failed robotomized" << std::endl;
	}
};