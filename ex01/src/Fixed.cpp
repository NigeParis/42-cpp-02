/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:10:02 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/20 16:53:51 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Fixed.hpp"

const int Fixed::_fractionBits = 8;

Fixed::Fixed( void ): _fixedPoint(0) { 
    std::cout << "Default constructor called" << std::endl;
};


Fixed::Fixed( const float nbr ) { 
    std::cout << "Float constructor called" << std::endl;
    _fixedPoint = (roundf(nbr * (1 << _fractionBits)));
    std::cout << _fixedPoint << std::endl;
};


Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed    &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    this->_fixedPoint = fixed._fixedPoint;
}; 

int Fixed::getRawBits( void ) const {

    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPoint);
    
};


Fixed &Fixed::operator=(const Fixed& e) {
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &e) 
        this->_fixedPoint = getRawBits();
    return (*this);
};

float Fixed::toFloat(void) const {

    return static_cast<float>(this->getRawBits()) / (1 << this->_fractionBits );
    
};



std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
    
    return os << fixed.toFloat();
    
};

