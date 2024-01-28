/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 00:22:29 by bsirikam          #+#    #+#             */
/*   Updated: 2024/01/28 12:54:11 by buntakansirikamo ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & cp )
{
	*this = cp;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &	BitcoinExchange::operator=( BitcoinExchange const & cp )
{
	if (this != &cp)
	{
	}
	return (*this);
}

BitcoinExchange::BitcoinExchange( std::string const &input )
{
	std::ifstream input_file;

	if (!create_database())
		throw DatabaseErrorException();
	if (!check_inputfile(input_file, input))
		throw OpenInputFailException();
	read_inputfile(input_file);
}

void	BitcoinExchange::readline(std::string const &line)
{
	std::size_t	pipe_pos = line.find('|');
	std::string date;
	float	amount;

	if (pipe_pos == std::string::npos || pipe_pos != line.rfind('|'))
	{
		std::cout << "Error: " << "Wrong Format" << std::endl;
		return ;
	}
	date = line.substr(0, pipe_pos - 1);
	amount = atof(line.substr(pipe_pos + 1).c_str());
}

void	BitcoinExchange::read_inputfile(std::ifstream &file)
{
	std::string	line;

	getline(file, line);
	while (getline(file, line))
	{
		readline(line);
	}
}

bool	BitcoinExchange::check_inputfile(std::ifstream &file, std::string const &input)
{
	file.open(input.c_str(), std::fstream::in);
	if (!file.is_open())
		return (false);
	return (true);
}

bool	BitcoinExchange::check_database( std::string const &dbname )
{
	size_t	n;

	n = dbname.rfind(".csv");
	if (n == std::string::npos)
		return (false);
	return (true);
}

void	BitcoinExchange::add_data(std::string const &line)
{
	std::string	date, price;
	size_t		cprice;
	std::string::size_type	n;

	n = line.find(',');
	if (n != line.rfind(','))
	{
		std::cout << "Error: " << "Wrong Format" << std::endl;
		return ;
	}
	date = line.substr(0, n);
	price = line.substr(n + 1);
	cprice = atof(price.c_str());
	_database.insert(std::pair<std::string, float>(date, cprice));
}

bool	BitcoinExchange::create_database(void)
{
	std::string _dbname = "data.csv";
	std::ifstream file;

	if (!check_database(_dbname))
		return (false);
	file.open(_dbname.c_str(), std::fstream::in);
	if (!file.is_open())
		return (false);
	std::string	line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		add_data(line);
	}
	file.close();
	return (true);
}