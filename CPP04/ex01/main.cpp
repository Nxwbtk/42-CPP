/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:49:18 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/30 21:21:11 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    {
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete i;
		delete j;
	}
	{
		Animal *i = new Dog();
		Animal *j = new Dog();

		//*i = *j;
		delete j;
		delete i;
	}
    return (0);
}