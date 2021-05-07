/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:52:26 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/30 12:31:51 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : name(name), apcost(apcost), damage(damage) { }

AWeapon::~AWeapon(void) {}

std::string const &AWeapon::getName(void) const
{
    return this->name;
}

int AWeapon::getAPCost(void) const
{
    return this->apcost;
}

int AWeapon::getDamage(void) const
{
    return this->damage;
}

AWeapon::AWeapon (AWeapon const &other)
{
    *this = other;
}

AWeapon &AWeapon::operator=(AWeapon const &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->damage = other.damage;
        this->apcost = other.apcost;
    }
    return (*this);
}

