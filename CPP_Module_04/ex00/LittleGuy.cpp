/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LittleGuy.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:04:10 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 16:46:23 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LittleGuy.hpp"

LittleGuy::LittleGuy(std::string name) : Victim(name)
{
    std::cout << "I'm a chess player and my name is " << this->name << std::endl;
} 

LittleGuy::~LittleGuy(void)
{
    std::cout << "Adios amigos..." << std::endl;
}

void LittleGuy::getPolymorphed(void) const
{
    std::cout << this->name << " has been turned into a banana!" << std::endl;
}

LittleGuy::LittleGuy (LittleGuy const &other)
{
    *this = other;
}

LittleGuy &LittleGuy::operator=(LittleGuy const &other)
{
    if (this != &other)
    {
        this->name = other.name;
    }
    return (*this);
}
