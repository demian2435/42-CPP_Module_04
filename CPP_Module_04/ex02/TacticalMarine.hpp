/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:48:51 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/30 14:50:35 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public :
        /* Default Constructor */
        TacticalMarine();
        /* Destructor */
        ~TacticalMarine();
        /* Copy constructor */
        TacticalMarine (TacticalMarine const &other);
        /* Operation overload = */
	    TacticalMarine &operator=(TacticalMarine const &other);
        /* Other */
        ISpaceMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};
