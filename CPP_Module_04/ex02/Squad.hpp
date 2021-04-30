/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:29:46 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/30 14:59:04 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

class Squad : public virtual ISquad
{
    private:
        ISpaceMarine *array[100];
        int i;
    public:
        Squad();
        ~Squad();
        int getCount(void) const;
        ISpaceMarine* getUnit(int index) const;
        int push(ISpaceMarine*);
};
