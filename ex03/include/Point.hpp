/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 09:36:10 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/09 09:28:29 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
#include "./include/Fixed.hpp"

class Point {

    public :
                Point(void);
                Point(const float x, const float y);

                Point(Point const &point);
                Point &operator=(const Point &point);
                ~Point(void);
                const Fixed get_x(void) const;    
                const Fixed get_y(void) const;    


    private :

                const Fixed _x;
                const Fixed _y;
                
};

std::ostream &operator<<(std::ostream &outputstream, const Point &point);

#endif