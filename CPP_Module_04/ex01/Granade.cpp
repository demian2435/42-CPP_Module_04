/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Granade.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:12:03 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/30 14:14:50 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Granade.hpp"

Granade::Granade() : AWeapon("Granade", 2, 120) {}

Granade::~Granade() {}

void Granade::attack() const
{
    std::cout << "* BOOOOOOOMMMMMMM *" << std::endl;
}

Granade::Granade (Granade const &other)
{
    *this = other;
}

Granade &Granade::operator=(Granade const &other)
{
    if (this != &other)
    {
        this->apcost = other.apcost;
        this->damage = other.damage;
        this->name = other.name;
    }
    return (*this);
}
