/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:05:01 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/08 16:08:49 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bsp.hpp"

static void    ftAbs(float *nbr) {

    if (*nbr < 0)
        *nbr *= -1;  
}   

static int isVertexOrEdge(float TriangleArea, float TriangleAreaA, float TriangleAreaB, float TriangleAreaC) {

    if ((TriangleArea == 0) || (TriangleAreaA == 0) || (TriangleAreaB == 0) || (TriangleAreaC == 0)) 
        return (true);
    return (false);
}

static float   calculateAreaTriangle( Point const a, Point const b, Point const c) {

    float TriangleArea;
    
    TriangleArea =  ((a.get_x()).toFloat() * ((b.get_y()).toFloat() - (c.get_y()).toFloat())
                    + (b.get_x()).toFloat() * ((c.get_y()).toFloat() - (a.get_y()).toFloat())
                    + (c.get_x()).toFloat() * ((a.get_y()).toFloat() - (b.get_y()).toFloat())) / 2;

    return (TriangleArea);
}

bool    bsp( Point const a, Point const b, Point const c, Point const point) {

    float TriangleArea;
    float TriangleAreaA;
    float TriangleAreaB;
    float TriangleAreaC;
    
    TriangleArea = calculateAreaTriangle(a, b, c);
    TriangleAreaA = calculateAreaTriangle(point, b, c);
    TriangleAreaB = calculateAreaTriangle(a, point, c);
    TriangleAreaC = calculateAreaTriangle(a, b, point);
    
    ftAbs(&TriangleArea);
    ftAbs(&TriangleAreaA);
    ftAbs(&TriangleAreaB);
    ftAbs(&TriangleAreaC);
  
    if (isVertexOrEdge(TriangleArea, TriangleAreaA, TriangleAreaB, TriangleAreaC))
        return (false);
          
    if (TriangleArea == (TriangleAreaA + TriangleAreaB + TriangleAreaC))
        return (true);
    return (false);  
};