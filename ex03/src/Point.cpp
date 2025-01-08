/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 09:39:47 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/08 16:12:36 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Point.hpp"

Point::Point(void) : _x(0), _y(0) {
    
};

Point::Point(const float x, const float y) : _x(x), _y(y) {
    
};

Point::Point(Point const &point) : _x(point._x), _y(point._y) {
    
};

Point& Point::operator=(const Point& point) {

    (void)point;
    return (*this);    
};

Point::~Point(void) {

    
};

const Fixed Point::get_x(void) const{

    return (this->_x);
};

const Fixed Point::get_y(void) const{

    return (this->_y);
};

// output
std::ostream &operator<<(std::ostream &outputstream, const Point &point) {
    
    outputstream 
    << "x : " 
    << std::setw(9) 
    << point.get_x() 
    << std::setw(9) 
    << " y : " 
    << point.get_y();
    return (outputstream);
};