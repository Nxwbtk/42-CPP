/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Writer.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:44:55 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/22 02:24:10 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRITER_HPP
# define WRITER_HPP

# include <string>
# include <iostream>
# include <sstream>
# include <fstream>

class Writer
{
	private:
		std::string		_filename;
		std::string		_s1;
		std::string		_s2;
		std::string		_line;
		std::ifstream	_newfile;
		std::ifstream	_fd;
	public:
		Writer(std::string filename, std::string s1, std::string s2);
		~Writer();
		void	readFile(void);
		int		makeNewFile(void);
		void	writefile(void);
};

#endif