/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:05:01 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/08 14:14:54 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bsp.hpp"

void    ft_abs(float *nbr) {

    if (*nbr < 0)
        *nbr *= -1;  

}   

bool    bsp( Point const a, Point const b, Point const c, Point const point) {

    float TriangleArea;
    float TriangleAreaA;
    float TriangleAreaB;
    float TriangleAreaC;
    
    TriangleArea =  ((a.get_x()).toFloat() * ((b.get_y()).toFloat() - (c.get_y()).toFloat())
                    + (b.get_x()).toFloat() * ((c.get_y()).toFloat() - (a.get_y()).toFloat())
                    + (c.get_x()).toFloat() * ((a.get_y()).toFloat() - (b.get_y()).toFloat())) / 2;
                    
    TriangleAreaA = ((point.get_x()).toFloat() * ((b.get_y()).toFloat() - (c.get_y()).toFloat())
                    + (b.get_x()).toFloat() * ((c.get_y()).toFloat() - (point.get_y()).toFloat())
                    + (c.get_x()).toFloat() * ((point.get_y()).toFloat() - (b.get_y()).toFloat())) / 2;

    TriangleAreaB = ((a.get_x()).toFloat() * ((point.get_y()).toFloat() - (c.get_y()).toFloat())
                    + (point.get_x()).toFloat() * ((c.get_y()).toFloat() - (a.get_y()).toFloat())
                    + (c.get_x()).toFloat() * ((a.get_y()).toFloat() - (point.get_y()).toFloat())) / 2;
  
    TriangleAreaC = ((a.get_x()).toFloat() * ((b.get_y()).toFloat() - (point.get_y()).toFloat())
                    + (b.get_x()).toFloat() * ((point.get_y()).toFloat() - (a.get_y()).toFloat())
                    + (point.get_x()).toFloat() * ((a.get_y()).toFloat() - (b.get_y()).toFloat())) / 2;
  
    ft_abs(&TriangleAreaA);
    ft_abs(&TriangleAreaB);
    ft_abs(&TriangleAreaC);
  
    if (TriangleArea == (TriangleAreaA + TriangleAreaB + TriangleAreaC))
        return (true);

    std::cout << TriangleArea << std::endl;
    std::cout << TriangleAreaA + TriangleAreaB + TriangleAreaC << std::endl;
    std::cout << TriangleAreaA << " " << TriangleAreaB << " " << TriangleAreaC << std::endl;

  
    return (false);  
};