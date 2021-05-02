/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 18:26:35 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/30 18:47:20 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource ()
{
	this->index = 0;
	for (int i = 0; i < 4; i++)
		this->list[i] = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->list[i])
			delete(this->list[i]);
}

MateriaSource::MateriaSource(MateriaSource const & other)
{
	*this = other;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & other)
{
	if (this != &other)
	{
		this->index = other.index;
		for (int i = 0; i < 4; i++)
		{
			this->list[i] = other.list[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->index > 3)
		return ;
	this->list[this->index++] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->index; i++)
		if (this->list[i]->getType().compare(type) == 0)
			return this->list[i]->clone();
	return 0;
}
