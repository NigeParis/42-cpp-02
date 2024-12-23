/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:09:31 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/23 12:04:37 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {

    public:

        Fixed(void);
        ~Fixed(void);
        Fixed(const Fixed& ex);
        Fixed &operator=(const Fixed& ex);
        Fixed(const int nbr);
        Fixed(const float nbr);
        int getRawBits( void ) const;
        float toFloat(void) const;
        int toInt(void) const;


    private:
    
        int _fixedPoint;
        static const int _fractionBits;
};

std::ostream &operator<<(std::ostream &outputstream, const Fixed &fixed);

#endif