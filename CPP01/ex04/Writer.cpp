/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Writer.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:03:36 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/23 02:37:19 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Writer.hpp"

Writer::Writer(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2)
{
	this->_fd.open(filename.c_str());
}

Writer::~Writer() {}

void	Writer::readFile(void)
{
	if (this->_fd.is_open())
	{
		std::getline(this->_fd, this->_line, '\0');
		this->_fd.close();
	}
}

void	Writer::writefile(void)
{
	readFile();
	while (this->_line.find(this->_s1) != std::string::npos)
	{
		this->_line.insert(this->_line.find(this->_s1) + this->_s1.length() , this->_s2);
		this->_line.erase(this->_line.find(this->_s1), this->_s1.length());
	}
	this->_newfile << this->_line;
}

int		Writer::makeNewFile(void)
{
	std::stringstream join;

	join << this->_filename << ".replace";
	this->_newfile.open(join.str().c_str(), std::fstream::in | std::fstream::out | std::fstream::app);
	if (this->_newfile.is_open())
	{
		writefile();
		return (1);
	}
	return (0);
}