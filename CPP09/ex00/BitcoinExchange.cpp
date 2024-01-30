/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 00:22:29 by bsirikam          #+#    #+#             */
/*   Updated: 2024/01/30 20:41:17 by bsirikam         ###   ########.fr       */
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

time_t	convert_date(std::string const &date)
{
	tm	date_struct = {};
	time_t	valid_date;

	date_struct.tm_year = std::atoi(date.substr(0, 4).c_str());
	date_struct.tm_mon = std::atoi(date.substr(5, 2).c_str());
	date_struct.tm_mday = std::atoi(date.substr(8, 2).c_str());
	valid_date = mktime(&date_struct);
	return (valid_date);
}

bool	check_bad_input(std::string const &line)
{
	std::size_t	pipe_pos = line.find('|');
	std::string date;
	size_t		i;
	time_t		valid_date;

	i = 0;
	if (pipe_pos == std::string::npos || pipe_pos != line.rfind('|'))
		return (false);
	date = line.substr(0, pipe_pos - 1);
	if (date.length() != 10)
		return (false);
	while (i < date.length())
	{
		if (i == 4 || i == 7)
		{
			if (date[i] != '-')
				return (false);
		}
		else if (!isdigit(date[i]))
			return (false);
		i++;
	}
	date = line.substr(0, pipe_pos - 1);
	valid_date = convert_date(date);
	if (valid_date == -1)
		return (false);
	return (true);
}

void	BitcoinExchange::cal_rate(time_t date, float &amount, std::string date_str)
{
	std::map<std::string, float>::iterator begin = _database.begin();
	std::map<std::string, float>::iterator end = _database.end();
	std::map<std::string, float>::iterator it;

	time_t	db_date;
	while (begin != end)
	{
		db_date = convert_date(begin->first);
		if (db_date == date)
		{
			std::cout << begin->first << " => " << amount << " => " << amount * begin->second << std::endl;
			break ;
		}
		else if (db_date > date)
		{
			it = _database.lower_bound(date_str);
			if (it == _database.end())
				it--;
			std::cout << date_str << " => " << amount << " => " << amount * it->second << std::endl;
			break;
		}
		begin++;
	}
}

void	BitcoinExchange::readline(std::string const &line)
{
	std::size_t	pipe_pos = line.find('|');
	float	amount;
	std::string	amount_str;
	std::string	date;
	time_t		valid_date;

	if (!check_bad_input(line))
	{
		std::cout << "Error: " << "bad input => " << line << std::endl;
		return ;
	}
	amount_str = line.substr(pipe_pos + 2);
	amount = atof(amount_str.c_str());
	if (amount < 0)
	{
		std::cout << "Error: " << "not a positive number" << std::endl;
		return ;
	}
	if (amount > 1000)
	{
		std::cout << "Error: " << "amount too high" << std::endl;
		return ;
	}
	date = line.substr(0, pipe_pos - 1);
	valid_date = convert_date(date);
	cal_rate(valid_date, amount, date);
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
	float		cprice;
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