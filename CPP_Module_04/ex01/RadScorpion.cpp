/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:52:53 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 18:36:32 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion (RadScorpion const &other)
{
    *this = other;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &other)
{
    if (this != &other)
    {
        this->hp = other.hp;
        this->type = other.type;
    }
    return (*this);
}
