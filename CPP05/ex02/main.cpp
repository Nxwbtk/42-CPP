/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 00:08:42 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/29 18:21:43 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat bureau("First", 60);
		AForm form("AForm", 59, 59);
		std::cout << "Bureaucrat Name: " << bureau.getName() << std::endl;
		std::cout << "Bureaucrat Grade: " << bureau.getGrade() << std::endl << std::endl;
		std::cout << form << std::endl << std::endl;
		bureau.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}