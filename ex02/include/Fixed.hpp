/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:09:31 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/07 08:59:03 by nrobinso         ###   ########.fr       */
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
        Fixed(const Fixed& fixed);
        Fixed &operator=(const Fixed& fixed);
        Fixed &operator++(void);
        Fixed operator++(int);
        Fixed &operator--(void);
        Fixed operator--(int);
        
        Fixed operator+(const Fixed& fixed) const;
        Fixed operator-(const Fixed& fixed) const;
        Fixed operator*(const Fixed& fixed) const;
        Fixed operator/(const Fixed& fixed) const;

        bool operator<(const Fixed& fixed) const;
        bool operator<=(const Fixed& fixed) const;
        
        
        
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