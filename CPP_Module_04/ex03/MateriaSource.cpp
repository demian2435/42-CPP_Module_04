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
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->index; i++)
		delete(this->list[i]);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->index > 3)
		return;
	this->list[this->index++] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->index; i++)
		if (this->list[i]->getType().compare(type) == 0)
			return this->list[i];
	return 0;
}
