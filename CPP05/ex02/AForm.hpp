/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:18:23 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/29 18:25:59 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int		_gradeToSign;
		const int		_gradeToExecute;
	public:
		AForm(void);
		AForm(const AForm& cp);
		AForm(const std::string name, const int gradeToSign, const int gradeToExecute);
		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;
		void		beSigend(const Bureaucrat& bureaucrat);
		~AForm(void);
		AForm& operator=(const AForm &cp);
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

std::ostream&	operator<<(std::ostream &os, const AForm &form);

#endif