/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 21:37:07 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/29 21:57:24 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
};

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cp)
{
	*this = cp;
};

ShrubberyCreationForm::ShrubberyCreationForm( const std::string &target ): AForm("Shrubbery", 145, 137), _target(target)
{

};

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cp)
{
	if (this != &cp)
	{
		this->_target = cp._target;
	}
	return (*this);
};

void	ShrubberyCreationForm::createTree(void) const
{
	std::ofstream	tonmai;
	std::string		file_name = "_shrubbery";

};