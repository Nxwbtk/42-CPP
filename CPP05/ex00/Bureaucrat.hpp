/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 00:08:50 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/26 10:09:57 by buntakansirikamo ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat(const std::string &name, const int &grade);
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat& cp);
		~Bureaucrat(void);
		Bureaucrat& operator=(const Bureaucrat &cp);
		std::string getName(void) const;
		int getGrade(void) const;
		void	incrementGrade(void);
		void	decrementGrade(void);
	class GradeTooHighException: public std::exception
	{
		public:
			const char* what() const throw ()
			{
				return ("Grade too high");
			}
	};
	class GradeTooLowException: public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("Grade too low");
			}
	};
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat &bureaucrat);

#endif