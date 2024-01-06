/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buntakansirikamonthip <buntakansirikamonth +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 04:36:37 by buntakansirikamo  #+#    #+#             */
/*   Updated: 2024/01/07 04:40:54 by buntakansirikamo ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base*   generate(void)
{
    srand(time(0));

    switch (rand() % 3)
    {
        case 0:
                return new A();
        case 1:
                return new B();
        default:
                return new C();
    }
}

void    identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
}

void    identify(Base &p)
{
    try
    {
        A   &a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch (std::exception &e)
    {
        try
        {
            B   &b = dynamic_cast<B &>(p);
            std::cout << "B" << std::endl;
            (void)b;
        }
        catch (std::exception &e)
        {
            try
            {
                C   &c = dynamic_cast<C &>(p);
                std::cout << "C" << std::endl;
                (void)c;
            }
            catch (std::exception &e)
            {
                std::cout << "Error" << std::endl;
            }
        }
    }
}

int	main(void)
{
	Base *base = generate();
	identify(base);
	identify(*base);
	delete base;
	return (0);
}