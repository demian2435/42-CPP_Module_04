/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:52:44 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 17:32:39 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::~PlasmaRifle() {}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::PlasmaRifle (PlasmaRifle const &other)
{
    *this = other;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &other)
{
    if (this != &other)
    {
        this->apcost = other.apcost;
        this->damage = other.damage;
        this->name = other.name;
    }
    return (*this);
}
