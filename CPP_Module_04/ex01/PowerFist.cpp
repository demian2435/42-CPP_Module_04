/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:52:49 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/30 12:36:20 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("PowerFist", 8, 50) {}

PowerFist::~PowerFist() {}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::PowerFist (PowerFist const &other)
{
    *this = other;
}

PowerFist &PowerFist::operator=(PowerFist const &other)
{
    if (this != &other)
    {
        this->apcost = other.apcost;
        this->damage = other.damage;
        this->name = other.name;
    }
    return (*this);
}
