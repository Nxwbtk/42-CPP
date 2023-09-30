/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 06:05:20 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/30 21:17:47 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain *_brain;
    public:
        Dog(void);
        Dog(const Dog& cp);
        ~Dog(void);
        Dog& operator=(const Dog &cp);
        void makeSound(void) const;
};

#endif