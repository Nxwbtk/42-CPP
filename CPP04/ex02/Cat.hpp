/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 06:06:30 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/30 21:18:11 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain *_brain;
    public:
        Cat(void);
        Cat(const Cat& cp);
        ~Cat(void);
        Cat& operator=(const Cat &cp);
        void makeSound(void) const;
};

#endif