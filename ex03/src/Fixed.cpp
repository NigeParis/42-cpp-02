/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:10:02 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/08 09:39:33 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Fixed.hpp"

const int Fixed::_fractionBits = 8;

// Default constructor
Fixed::Fixed( void ): _fixedPoint(0) {
     
};

// Copy constructor
Fixed::Fixed(const Fixed    &fixed) {
    this->_fixedPoint = fixed._fixedPoint;
}; 

// Copy assignment operator
Fixed &Fixed::operator=(const Fixed& nbr) {

    if (this != &nbr) 
        this->_fixedPoint = nbr.getRawBits();
    return (*this);
};

// Destructor
Fixed::~Fixed(void) {
};

// increment / de-increment operators
Fixed &Fixed::operator++(void) {

    ++this->_fixedPoint;
    return (*this);
};

Fixed Fixed::operator++(int) {

    Fixed temp;
    temp = *this;
    ++this->_fixedPoint;
  
    return (temp);
};

Fixed &Fixed::operator--(void) {

    --this->_fixedPoint;
    return (*this);
};

Fixed Fixed::operator--(int) {

    Fixed temp;
    temp = *this;
    --this->_fixedPoint;
  
    return (temp);
};

// maths operators
Fixed Fixed::operator+(const Fixed& fixed) const {
    
    Fixed temp;
    temp.setRawBits(this->_fixedPoint + fixed._fixedPoint);
    return (temp);    
};

Fixed Fixed::operator-(const Fixed& fixed) const {
    
    Fixed temp;
    temp.setRawBits(this->_fixedPoint - fixed._fixedPoint);
    return (temp);        
};

Fixed Fixed::operator*(const Fixed& fixed) const {
    
    Fixed temp;
    temp.setRawBits(static_cast<float>(this->_fixedPoint) / (1 << _fractionBits) * fixed._fixedPoint);    
    return (temp);
};

Fixed Fixed::operator/(const Fixed& fixed) const {
    
    Fixed temp;

    if (fixed._fixedPoint == 0)
        return (std::cout << "Error Div Zero" << std::endl, 0);
    temp.setRawBits((this->_fixedPoint << _fractionBits) / fixed._fixedPoint);
    
    return (temp);
};

//comparisons operators
bool Fixed::operator<(const Fixed& fixed) const {
    
    if (this->_fixedPoint < fixed._fixedPoint)
        return (true);
    return (false);    
};

bool Fixed::operator<=(const Fixed& fixed) const {
    
    if (this->_fixedPoint <= fixed._fixedPoint)
        return (true);
    return (false);    
};

bool Fixed::operator>(const Fixed& fixed) const {

    if (this->_fixedPoint > fixed._fixedPoint)
        return (true);
    return (false);
};

bool Fixed::operator>=(const Fixed& fixed) const {

    if (this->_fixedPoint >= fixed._fixedPoint)
        return (true);
    return (false);
};

bool Fixed::operator==(const Fixed& fixed) const {

    if (this->_fixedPoint == fixed._fixedPoint)
        return (true);
    return (false);
};

bool Fixed::operator!=(const Fixed& fixed) const {

    if (this->_fixedPoint != fixed._fixedPoint)
        return (true);
    return (false);
};

// Int constructor
Fixed::Fixed( const int nbr ) { 

    _fixedPoint = (roundf(nbr * (1 << _fractionBits)));
};

// Float constructor
Fixed::Fixed( const float nbr ) { 

    _fixedPoint = (roundf(nbr * (1 << _fractionBits)));
};

// get or set raw bits
int Fixed::getRawBits( void ) const {

    return (this->_fixedPoint);    
};

void Fixed::setRawBits(int const raw) {

    this->_fixedPoint = raw;
};

// convertions
float Fixed::toFloat(void) const {

    return static_cast<float>(this->getRawBits()) / (1 << this->_fractionBits );
};

int Fixed::toInt(void) const {

    return static_cast<int>(this->getRawBits()) / (1 << this->_fractionBits );  
};

// return MAX ou MIN
Fixed& Fixed::max(Fixed& a, Fixed& b) {

    std::cout << "MAX called : ";
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
};

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {

    std::cout << "const MAX called : ";
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
};

Fixed& Fixed::min(Fixed& a, Fixed& b) {

    std::cout << "MIN called : ";
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
};

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {

    std::cout << "const MIN called : ";
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
};

// output
std::ostream &operator<<(std::ostream &outputstream, const Fixed &fixed) {
    
    return outputstream << fixed.toFloat();
};
