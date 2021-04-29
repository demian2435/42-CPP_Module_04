/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:04:20 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 16:24:28 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : name(name)
{
    std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
} 

Victim::~Victim(void)
{
    std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::getName(void)
{
    return this->name;
}

void Victim::getPolymorphed(void) const
{
    std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator << (std::ostream &output, Victim &obj)
{
	output << "I'm " << obj.getName() << " and I like otters!" << std::endl;
	return (output);
}
