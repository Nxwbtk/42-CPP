/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 00:08:42 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/30 00:03:47 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try
	{
		// Bureaucrat	bob("Bob", 1);

		// ShrubberyCreationForm	formS("test_S");
		// bob.signForm(formS);
		// formS.createTree();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}