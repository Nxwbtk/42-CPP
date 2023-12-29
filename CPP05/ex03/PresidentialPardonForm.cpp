/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 02:04:30 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/30 02:19:16 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& cp ): AForm(cp.getName(), cp.getGradeToSign(), cp.getGradeToExecute()), _target(cp._target)
{
};

PresidentialPardonForm::~PresidentialPardonForm(void)
{
};

PresidentialPardonForm::PresidentialPardonForm( const std::string &target ): AForm("PresidentialPardonForm", 25, 5), _target(target)
{
};

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &cp)
{
	if (this != &cp)
	{
		this->_target = cp._target;
	}
	return (*this);
};

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
};

void	PresidentialPardonForm::pardon(void) const
{
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
};

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if (!this->getSigned())
		throw NotSignedException();
	if (this->getGradeToExecute() < executor.getGrade())
		throw GradeTooLowException();
	this->pardon();
};