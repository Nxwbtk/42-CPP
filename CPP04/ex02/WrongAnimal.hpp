/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:15:45 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/30 19:31:38 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal& cp);
        WrongAnimal(std::string type);
        ~WrongAnimal(void);
        WrongAnimal& operator=(const WrongAnimal &cp);
        void makeSound(void) const;
        std::string getType(void) const;
};

#endif