/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bsp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:07:54 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/08 13:28:11 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BSP_HPP
#define BSP_HPP

#include <cmath>
#include "./include/Point.hpp"


bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif