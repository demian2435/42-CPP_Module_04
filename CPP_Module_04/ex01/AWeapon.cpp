/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:52:26 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 17:40:10 by dmalori          ###   ########.fr       */
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

void AWeapon::attack(void) const {}
