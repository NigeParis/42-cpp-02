/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/08 14:20:00 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "./include/Point.hpp"
#include "./include/Bsp.hpp"

int main( void ) {

    Point a(9.02f, 11.84f);
    Point b(3.51f, 5.32f);
    Point c(11.94f, 3.55f);
    Point point(5.87f, 8.14f);
    
    std::cout << "point a : " << a << std::endl;
    std::cout << "point b : " << b << std::endl;
    std::cout << "point c : " << c << std::endl;
    std::cout << "point ? : " << point << std::endl;

    if (bsp(a, b, c, point))
        std::cout << "Point inside triangle" << std::endl;
    else
        std::cout << "Point NOT inside triangle" << std::endl;
    

    return (0);
}