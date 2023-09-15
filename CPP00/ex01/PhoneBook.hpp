/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:26:33 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/15 17:17:16 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contact[8];
		int		index;
	public:
		void	search(void);
		void	add(void);
};

#endif