/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:51:22 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/23 16:26:43 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{

}

Harl::~Harl(void)
{

}

void	Harl::debug(void)
{
	std::cout << "DEBUG" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for(int i = 0; i < 4; i++)
	{
		if (level.compare(levels[i]) == 0)
			(this->*f[i])();
	}
}

void	Harl::filter(int level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	size = 4;

	if (level == -1)
	{
		size = 5;
		level = 5;
	}
	for (int i = level; i <= size; i++)
	{
		switch(i) {
			case 1:
				complain(levels[0]);
				break;
			case 2:
				complain(levels[1]);
				break;
			case 3:
				complain(levels[2]);
				break;
			case 4:
				complain(levels[3]);
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break;
		}
	}
}