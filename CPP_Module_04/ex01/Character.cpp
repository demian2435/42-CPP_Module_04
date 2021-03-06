/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:52:32 by dmalori           #+#    #+#             */
/*   Updated: 2021/05/10 11:47:46 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : name(name), ap(40) , weapon(0) {}

Character::~Character() {}

void Character::recoverAP(void)
{
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
}

void Character::equip(AWeapon *w)
{
	this->weapon = w;
}

void Character::attack(Enemy *e)
{
	if (this->weapon && this->weapon->getAPCost() <= this->ap)
	{
		this->ap -= this->weapon->getAPCost();
		std::cout << this->name << " attacks " << e->getType() << " with a " << this->weapon->getName() << std::endl;
		this->weapon->attack();
	}
}

std::string const &Character::getName() const
{
	return this->name;
}

int Character::getAp(void)
{
	return this->ap;
}

AWeapon *Character::getWeapon(void)
{
	return this->weapon;
} 

std::ostream& operator<<(std::ostream &output, Character &obj)
{
	if (obj.getWeapon())
		output << obj.getName() << " has " << obj.getAp() << " AP and wields a " << obj.getWeapon()->getName() << std::endl;
	else
		output << obj.getName() << " has " << obj.getAp() << " AP and is unarmed" << std::endl;
	return (output);
}

Character::Character (Character const &other)
{
    *this = other;
}

Character &Character::operator=(Character const &other)
{
    if (this != &other)
    {
        this->ap = other.ap;
        this->name = other.name;
        this->weapon = other.weapon;
    }
    return (*this);
}
