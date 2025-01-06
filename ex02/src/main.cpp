/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/06 16:30:53 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Fixed.hpp"
#include <iostream>


int main( void ) {
Fixed a;
Fixed c;
//Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << c << std::endl;
std::cout << ++a << std::endl;
std::cout << c++ << std::endl;
std::cout << a << std::endl;
std::cout << c  << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
//std::cout << b << std::endl;
//std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}