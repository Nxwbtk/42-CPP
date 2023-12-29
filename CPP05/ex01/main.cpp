/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 00:08:42 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/26 10:38:37 by buntakansirikamo ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat bureau("First", 60);
		Form form("AForm", 59, 59);
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