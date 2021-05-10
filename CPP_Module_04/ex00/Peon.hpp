/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:04:13 by dmalori           #+#    #+#             */
/*   Updated: 2021/05/10 11:40:09 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
    private:
        /* Default Constructor */
        Peon() {}
    public:
        /* Constructor  */
        Peon(std::string name);
        /* Destructor */
        virtual ~Peon(void);
        /* Copy constructor */
        Peon (Peon const &other);
        /* Operation overload = */
	    Peon &operator=(Peon const &other);
        /* Other */
        void getPolymorphed(void) const;
};
