/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wolf.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:52:53 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/30 14:18:01 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wolf.hpp"

Wolf::Wolf(void) : Enemy(25, "Wolf")
{
    std::cout << "* Wuuuuuuuuuuu *" << std::endl;
}

Wolf::~Wolf(void)
{
    std::cout << "* Wuu Wuuu Wuuuuu *" << std::endl;
}
