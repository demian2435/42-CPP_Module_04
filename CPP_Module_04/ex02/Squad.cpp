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
    {
        if (this->array[i])
            delete (this->array[i]);
        this->array[i] = 0;
    }
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
        return this->i;
    for (int j = 0; j < this->i; j++)
        if (this->array[j] == new_sm)
            return this->i;
    this->array[this->i++] = new_sm;
    return this->i;
}

Squad::Squad (Squad const &other)
{
    Squad::operator=(other);
}

Squad &Squad::operator=(Squad const &other)
{
    if (this != &other)
    {
        for (int j = 0; j < 100; j++)
        {
            if (this->array[j])
                delete (this->array[j]);
            this->array[j] = 0;
        }
        this->i = 0;
        for (int j = 0; j < 100; j++)
            if (other.array[j])
                this->push(other.getUnit(j)->clone());
    }
    return (*this);
}
