/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 16:38:44 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/30 18:28:21 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::~Ice(void) {}

Ice::Ice(Ice const &other) : AMateria("Ice")
{
    *this = other;
}

Ice & Ice::operator=(Ice const &other)
{
	if (this != &other)
	{
		AMateria::operator=(other);
	}
	return (*this);
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}
