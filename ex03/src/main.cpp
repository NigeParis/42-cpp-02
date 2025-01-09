/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/09 09:28:15 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./include/Point.hpp"
#include "./include/Bsp.hpp"

int main( void ) {

    Point a(0.0f, 0.0f);
    Point b(0.0f, 4.0f);
    Point c(6.0f, 0.0f);
    Point point(2.5f, 0.00f);

    if (bsp(a, b, c, point))
        std::cout << "Point is inside the triangle" << std::endl;
    else
        std::cout << "Point NOT inside the triangle" << std::endl;
        
    return (0);
}