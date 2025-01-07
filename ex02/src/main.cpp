/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/07 16:59:04 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Fixed.hpp"
#include <iostream>


int main( void ) {
Fixed a;
Fixed c;
Fixed d( Fixed( 5.05f ) * Fixed( 2 ) );
Fixed const b( Fixed( 5.05f ) * Fixed( 0.05f ) );

std::cout << "Fixed a       : " << a << std::endl;
std::cout << "Fixed const b : " << b << std::endl;
std::cout << "Fixed c       : " << c << std::endl;
std::cout << "Fixed d       : " << d << std::endl;
std::cout << "Fixed c++     : " << c++ << std::endl;
std::cout << "Fixed ++a     : " << ++a << std::endl;
std::cout << "Fixed c++     : " << c++ << std::endl;
std::cout << "Fixed c       : " << c << std::endl;
std::cout << "div   c/a     : " << c / a << std::endl;
std::cout << "multi c*d     : " << c * d << std::endl;
std::cout << "multi d*2     : " << d * 2 << std::endl;
std::cout << "minus c-d     : " << c - d << std::endl;
std::cout << "add   c+d     : " << c + d << std::endl;
std::cout << "div   c/0.5f  : " << c / 0.5f << std::endl;
std::cout << "0 if (c == a) : " << (c == a) << std::endl;
std::cout << "1 if (c != a) : " << (c != a) << std::endl;
std::cout << "Fixed ++a     : " << a++ << std::endl;
std::cout << "Fixed a       : " << a << std::endl;
std::cout << "Fixed b       : " << b << std::endl;
std::cout << "Fixed c       : " << c << std::endl;
std::cout << "Fixed d       : " << d << std::endl;
std::cout << "min (a, b)    : " << Fixed::min( a, b ) << std::endl;
std::cout << "max (a, b)    : " << Fixed::max( a, b ) << std::endl;
std::cout << "min (a, d)    : " << Fixed::min( a, d ) << std::endl;
std::cout << "max (a, d)    : " << Fixed::max( a, d ) << std::endl;
return 0;
}