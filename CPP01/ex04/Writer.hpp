/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Writer.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:44:55 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/17 15:12:19 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRITER_HPP
# define WRITER_HPP

# include <string>
# include <iostream>

class Writer
{
	private:
		std::string	_filename;
		std::string	_s1;
		std::string	_s2;
		int			_fd;
	public:
		Writer(std::string filename, std::string s1, std::string s2);
		~Writer();
		void	readFile(void);
};

#endif