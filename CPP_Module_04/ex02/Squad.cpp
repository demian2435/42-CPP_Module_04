/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:33:12 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/30 14:47:45 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
    this->i = 0;
    for (int i = 0; i < 100; i++)
        this->array[i] = 0;
}

Squad::~Squad()
{
    for (int i = 0; i < 100; i++)
        if (this->array[i])
            delete (this->array[i]);
}

int Squad::getCount(void) const
{
    return this->i;
}

ISpaceMarine* Squad::getUnit(int index) const
{
    if (index >= 0 && index < this->i)
        return this->array[index];
    else
        return 0;
}

int Squad::push(ISpaceMarine *new_sm)
{
    if (this->i == 100)
        return i;
    for (int i = 0; i < this->i; i++)
        if (this->array[i] == new_sm)
            return this->i;
    this->array[i++] = new_sm;
    return i;
}

Squad::Squad (Squad const &other)
{
    Squad::operator=(other);
}

Squad &Squad::operator=(Squad const &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            if (this->array[i])
                delete (this->array[i]);
        this->i = 0;
        for (int i = 0; i < 100; i++)
            if (other.array[i])
                this->push(other.getUnit(i));
    }
    return (*this);
}
