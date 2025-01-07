/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:09:31 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/07 14:49:00 by nrobinso         ###   ########.fr       */
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
        bool operator>(const Fixed& fixed) const;
        bool operator>=(const Fixed& fixed) const;
        bool operator==(const Fixed& fixed) const;
        bool operator!=(const Fixed& fixed) const;
        
        Fixed(const int nbr);
        Fixed(const float nbr);
        int getRawBits( void ) const;
        void setRawBits(int const raw);
        
        float toFloat(void) const;
        int toInt(void) const;

        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);

    private:
    
        int _fixedPoint;
        static const int _fractionBits;
};

std::ostream &operator<<(std::ostream &outputstream, const Fixed &fixed);

#endif