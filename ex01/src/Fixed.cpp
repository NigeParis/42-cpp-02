/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:10:02 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/20 12:50:34 by nrobinso         ###   ########.fr       */
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

Fixed::Fixed(const Fixed& ex) {
    std::cout << "Copy constructor called" << std::endl;
    this->_fixedPoint = ex._fixedPoint;
}; 

int Fixed::getRawBits( void ) {

    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPoint);
    
};

int Fixed::getRawBits( const Fixed& e ) {

    std::cout << "getRawBits member function called" << std::endl;
    return (e._fixedPoint);
    
};

Fixed &Fixed::operator=(const Fixed& e) {
    std::cout << "Copy assignment operator called" << std::endl; 
    this->_fixedPoint = getRawBits(e);
    return (*this);
};
