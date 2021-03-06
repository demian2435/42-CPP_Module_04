/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:48:51 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/30 14:55:09 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    public :
        /* Default Constructor */
        AssaultTerminator();
        /* Destructor */
        ~AssaultTerminator();
        /* Copy constructor */
        AssaultTerminator (AssaultTerminator const &other);
        /* Operation overload = */
	    AssaultTerminator &operator=(AssaultTerminator const &other);
        /* Other */
        ISpaceMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};
