/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 02:27:55 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/30 02:49:26 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <exception>
# include <string>

class	AForm;
class	ShrubberyCreationForm;
class	RobotomyRequestForm;
class	PresidentialPardonForm;

class	Intern
{
	public:
		Intern(void);
		Intern( const Intern& cp );
		~Intern(void);
		Intern& operator=( const Intern& cp );
		AForm*	makeForm(std::string formName, std::string target);
	class InvalidFormException: public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("Form is invalid");
			}
	};
};

#endif