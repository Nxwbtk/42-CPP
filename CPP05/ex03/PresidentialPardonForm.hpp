/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 01:56:38 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/30 02:12:10 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include "AForm.hpp"
# include <exception>

class AForm;

class PresidentialPardonForm: public AForm
{
	private:
		std::string	_target;
	public:
		~PresidentialPardonForm(void);
		PresidentialPardonForm( const PresidentialPardonForm& cp );
		PresidentialPardonForm( const std::string &target );
		PresidentialPardonForm& operator=(const PresidentialPardonForm &cp);
		std::string	getTarget(void) const;
		void	execute(Bureaucrat const & executor) const;
		void	pardon(void) const;
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