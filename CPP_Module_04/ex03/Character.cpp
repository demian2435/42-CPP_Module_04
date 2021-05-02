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
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->list[i] = 0;
}

Character::Character(Character &other)
{
	Character::operator=(other);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->list[i])
			delete (this->list[i]);
}


Character &Character::operator = (Character &other)
{
	if (this != &other)
	{
		this->name = other.getName();
		for (int i = 0; i < 4; i++)
			this->list[i] = other.list[i];
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
		if (!this->list[i])
		{
			this->list[i] = m;
			return ;
		}
}
void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->list[idx])
		this->list[idx] = 0;
}
void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->list[idx])
		this->list[idx]->use(target);
}
