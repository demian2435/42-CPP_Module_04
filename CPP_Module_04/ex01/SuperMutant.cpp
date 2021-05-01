/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:52:58 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 18:32:57 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
    std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
    damage -= 3;
    if (damage > 0)
        this->hp -= damage;
            if (this->hp < 0)
                this->hp = 0;
}

SuperMutant::SuperMutant (SuperMutant const &other)
{
    *this = other;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &other)
{
    if (this != &other)
    {
        this->hp = other.hp;
        this->type = other.type;
    }
    return (*this);
}
