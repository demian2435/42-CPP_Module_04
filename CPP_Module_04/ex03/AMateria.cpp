/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 15:25:36 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/30 18:46:46 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <string>

AMateria::AMateria(std::string const & type) : _type(type), _xp(0) {}

AMateria::AMateria(AMateria const &other)
{
	*this = other;
}

AMateria::~AMateria(void) {}

std::string const & AMateria::getType() const
{
    return this->_type;
}

unsigned int AMateria::getXP() const
{
    return this->_xp;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}

AMateria &AMateria::operator=(AMateria const &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		this->_xp = other._xp;
	}
	return (*this);
}
