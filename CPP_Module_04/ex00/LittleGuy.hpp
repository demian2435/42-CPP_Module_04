/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LittleGuy.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:04:13 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 16:44:53 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Victim.hpp"

class LittleGuy : public Victim
{
    public:
        /* Default Constructor */
        LittleGuy() {}
        /* Constructor  */
        LittleGuy(std::string name);
        /* Destructor */
        virtual ~LittleGuy(void);
        /* Copy constructor */
        LittleGuy (LittleGuy const &other);
        /* Operation overload = */
	    LittleGuy &operator=(LittleGuy const &other);
        /* Other */
        void getPolymorphed(void) const;
};
