/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 01:28:15 by bsirikam          #+#    #+#             */
/*   Updated: 2023/09/24 03:02:21 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <ostream>

class Fixed
{
	private:
		int	_fixpoint;
		static const int _fractional_bits = 8;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &fixed);
		Fixed(const int num);
		Fixed(const float fnum);
		Fixed &operator=(const Fixed &fixed);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		bool operator>(const Fixed &fixed);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif