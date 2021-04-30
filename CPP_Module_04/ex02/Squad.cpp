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
}

Squad::~Squad()
{
    for (int i = 0; i < this->i; i++)
        delete (this->array[i]);
}

int Squad::getCount(void) const
{
    return this->i;
}

ISpaceMarine* Squad::getUnit(int index) const
{
    if (index < this->i)
        return this->array[index];
    else
        return 0;
}

int Squad::push(ISpaceMarine *new_sm)
{
    this->array[i++] = new_sm;
    return i;
}
