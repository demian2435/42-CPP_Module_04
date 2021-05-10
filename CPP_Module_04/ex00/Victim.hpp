/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:04:22 by dmalori           #+#    #+#             */
/*   Updated: 2021/05/10 11:39:30 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Victim
{
    protected:
        std::string name;
        /* Default Constructor */
        Victim() {}
    public:
        /* Constructor  */
        Victim(std::string name);
        /* Destructor */
        virtual ~Victim(void);
        /* Copy constructor */
        Victim (Victim const &other);
        /* Operation overload = */
	    Victim &operator=(Victim const &other);
        /* Other */
        std::string getName(void);
        virtual void getPolymorphed(void) const;
};

std::ostream& operator<<(std::ostream &output, Victim &obj);
