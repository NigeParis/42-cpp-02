/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:10:02 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/08 08:37:49 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Fixed.hpp"

const int Fixed::_fractionBits = 8;

Fixed::Fixed( void ): _fixedPoint(0) { 
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed    &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    this->_fixedPoint = fixed._fixedPoint;
}; 

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
};

Fixed &Fixed::operator=(const Fixed& nbr) {
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &nbr) 
        this->_fixedPoint = nbr.getRawBits();
    return (*this);
};

// Int constructor
Fixed::Fixed( const int nbr ) { 
    std::cout << "Int constructor called" << std::endl;
    _fixedPoint = (roundf(nbr * (1 << _fractionBits)));
};

// Float constructor
Fixed::Fixed( const float nbr ) { 
    std::cout << "Float constructor called" << std::endl;
    _fixedPoint = (roundf(nbr * (1 << _fractionBits)));
};

int Fixed::getRawBits( void ) const {

    return (this->_fixedPoint);    
};

// convertions
float Fixed::toFloat(void) const {

    return static_cast<float>(this->getRawBits()) / (1 << this->_fractionBits );
};

int Fixed::toInt(void) const {

    return static_cast<int>(this->getRawBits()) / (1 << this->_fractionBits );
};

// output
std::ostream &operator<<(std::ostream &outputstream, const Fixed &fixed) {
    
    return outputstream << fixed.toFloat();  
};

