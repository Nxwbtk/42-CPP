/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:26:33 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/16 02:04:36 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contact[8];
		int		index;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	search(void);
		void	add(void);
		int		menu(void);
		void	run(void);
		void	clean(void);
		std::string inputStrCheck(std::string msg);
		std::string inputNumCheck(std::string msg, unsigned long max, unsigned long min);
};

#endif