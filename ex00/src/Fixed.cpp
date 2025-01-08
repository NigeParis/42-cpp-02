/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:10:02 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/08 08:44:41 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Fixed.hpp"

const int Fixed::_fractionBits = 8;

Fixed::Fixed( void ) { 
    std::cout << "Default constructor called" << std::endl;
    _fixedPoint = 0;
};

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed& fixed) {
    std::cout << "Copy constructor called" << std::endl;
    this->_fixedPoint = fixed._fixedPoint;
}; 

int Fixed::getRawBits( void ) const {

    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPoint);
    
};

void Fixed::setRawBits( int const raw ) {
    
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPoint = raw;
    
};

Fixed &Fixed::operator=(const Fixed& fixed) {
    std::cout << "Copy assignment operator called" << std::endl; 
    this->_fixedPoint = fixed.getRawBits();
    return (*this);
};
