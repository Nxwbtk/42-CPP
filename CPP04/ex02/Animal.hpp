/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 06:01:44 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/30 22:22:46 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal(void);
        Animal(std::string type);
        Animal(const Animal& cp);
        virtual ~Animal(void);
        Animal& operator=(const Animal &cp);
        std::string getType(void) const;
        virtual void makeSound(void) const = 0;
};

#endif