/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 00:08:42 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/30 01:50:33 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	try
	{
		// Bureaucrat	bob("Bob", 1);

		// ShrubberyCreationForm	formS("test_S");
		// bob.signForm(formS);
		// formS.execute(bob);

		Bureaucrat	jim("Jim", 2);
		RobotomyRequestForm formR("test_R");
		jim.signForm(formR);
		formR.execute(jim);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}