/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 00:53:00 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/30 01:49:08 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include "AForm.hpp"
# include <exception>
# include <cstdlib>
# include <ctime>

class AFrom;

class RobotomyRequestForm: public AForm
{
	private:
		std::string	_target;
	public:
		~RobotomyRequestForm(void);
		RobotomyRequestForm( const RobotomyRequestForm& cp );
		RobotomyRequestForm( const std::string &target );
		RobotomyRequestForm& operator=(const RobotomyRequestForm &cp);
		std::string	getTarget(void) const;
		void	execute(Bureaucrat const & executor) const;
		void	robotomize(void) const;
	class NotSignedException: public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("Form is not signed");
			}
	};
};

#endif