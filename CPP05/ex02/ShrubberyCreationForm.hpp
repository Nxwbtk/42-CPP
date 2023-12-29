/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 21:17:31 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/29 23:57:25 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "AForm.hpp"
# include <fstream>

class AFrom;

class ShrubberyCreationForm: public AForm
{
	private:
		std::string	_target;
	public:
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm( const ShrubberyCreationForm& cp );
		ShrubberyCreationForm( const std::string &target );
		ShrubberyCreationForm	&operator=( const ShrubberyCreationForm& cp );
		void	createTree(void);
		std::string	getTarget(void) const;
};

#endif