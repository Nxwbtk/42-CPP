/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 23:52:18 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/28 00:15:27 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int		_gradeToSign;
		const int		_gradeToExecute;
	public:
		Form(void);
		Form(const Form& cp);
		Form(const std::string name, const int gradeToSign, const int gradeToExecute);
		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;
		void		beSigend(const Bureaucrat& bureaucrat);
		~Form(void);
		Form& operator=(const Form &cp);
	class GradeTooHighException: public std::exception
	{
		public:
			const char* what() const throw ()
			{
				return ("Form grade too high");
			}
	};
	class GradeTooLowException: public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("From grade too low");
			}
	};
};

std::ostream&	operator<<(std::ostream &os, const Form &form);

#endif