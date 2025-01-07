/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:09:31 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/07 14:44:30 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {

    public:

        Fixed(void);
        ~Fixed(void);
        Fixed(const Fixed& fixed);
        Fixed &operator=(const Fixed& fixed);
        int getRawBits( void ) const;
        void setRawBits( int const raw );

    private:
    
        int _fixedPoint;
        static const int _fractionBits;
};

#endif