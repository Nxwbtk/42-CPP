/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:02:13 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/22 01:22:59 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Writer.hpp"


int	main(int ac, char **av)
{
	if (ac != 4)
		return (1);
	Writer writer(av[1], av[2], av[3]);
	writer.makeNewFile();
}