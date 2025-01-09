/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 09:39:47 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/09 09:40:51 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Point.hpp"

// Default constructor
Point::Point(void) : _x(0), _y(0) {
    
};

// constructor that takes as parameters two constant floating-point numbers
Point::Point(const float x, const float y) : _x(x), _y(y) {
    
};

// Copy constructor
Point::Point(Point const &point) : _x(point._x), _y(point._y) {
    
};

// Copy assignment operator
Point& Point::operator=(const Point& point) {

    (void)point;
    return (*this);    
};

// Destructor
Point::~Point(void) {

    
};

// get x and y values
const Fixed Point::get_x(void) const{

    return (this->_x);
};

const Fixed Point::get_y(void) const{

    return (this->_y);
};

// output for debug
// std::ostream &operator<<(std::ostream &outputstream, const Point &point) {
    
//     outputstream 
//     << "x : " 
//     << point.get_x() 
//     << " y : " 
//     << point.get_y();
//     return (outputstream);
// };