/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 00:08:42 by bsirikam          #+#    #+#             */
/*   Updated: 2023/12/29 22:13:11 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
    try
    {
        Bureaucrat  b1("one", 2);
        Bureaucrat  b2("two", 149);

        b1 = b2;
        std::cout << "b1 = " << b1 << std::endl;
        b1.incrementGrade();
        std::cout << "b2 = " << b2 << std::endl;
        b2.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}