/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 00:08:42 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/30 02:20:06 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	bob("Bob", 1);

		ShrubberyCreationForm	formS("test_S");
		bob.signForm(formS);
		formS.execute(bob);

		Bureaucrat	jim("Jim", 2);
		RobotomyRequestForm formR("test_R");
		jim.signForm(formR);
		formR.execute(jim);

		Bureaucrat	john("John", 3);
		PresidentialPardonForm formP("test_P");
		john.signForm(formP);
		formP.execute(john);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}