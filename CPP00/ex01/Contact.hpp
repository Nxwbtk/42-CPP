/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:22:37 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/15 17:12:51 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
class Contact
{
	private:
		int	index;
		std::string fname;
		std::string	lname;
		std::string phone;
	public:
		Contact(void);
		~Contact(void);
		void	setUser(int i, std::string fname, std::string lname, std::string phone);
};

#endif