/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:04:10 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 16:43:57 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
} 

Peon::~Peon(void)
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed(void) const
{
    std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}
