/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 17:42:54 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/30 18:29:43 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
	this->index = 0;
	this->name = name;
}

Character::Character(Character &other)
{
	this->index = other.index;
	this->name = other.name;
	for (int i = 0; i < this->index; i++)
		this->list[i] = other.list[i];
}

Character::~Character()
{
	for (int i = 0; i < this->index; i++)
		delete (this->list[i]);
}


Character &Character::operator = (Character &other)
{
	return *(new Character(other));
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	if (this->index > 3)
		return ;
	this->list[this->index++] = m;
}
void Character::unequip(int idx)
{
	if (this->index == 0)
		return ;
	this->list[this->index--] = nullptr;
}
void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < this->index)
		this->list[idx]->use(target);
}
