/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 23:57:58 by bsirikam          #+#    #+#             */
/*   Updated: 2024/01/30 19:06:49 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>
# include <exception>
# include <cstdlib>

class BitcoinExchange
{
	private:
		std::map<std::string, float>		_database;
	public:
		BitcoinExchange();
		BitcoinExchange( BitcoinExchange const & cp );
		BitcoinExchange( std::string const &input );
		~BitcoinExchange();
		BitcoinExchange &	operator=( BitcoinExchange const & cp );
		bool	create_database(void);
		bool	check_database(std::string const &dbname);
		bool	check_inputfile(std::ifstream &file, std::string const &input);
		void	add_data(std::string const &line);
		void	read_inputfile(std::ifstream &file);
		void	readline(std::string const &line);
		void	cal_rate(time_t date, float &amount, std::string date_str);
	class DatabaseErrorException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Error: Database Error");
			}
	};

	class OpenInputFailException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Error: could not open file.");
			}
	};
};

#endif