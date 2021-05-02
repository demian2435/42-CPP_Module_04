/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 15:19:03 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/30 18:28:32 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Ice : public AMateria
{
    public:
        /* Default Constructor */
        Ice(void);
        /* Destructor */
        ~Ice();
        /* Copy constructor */
        Ice(Ice const &other);
        /* Operation overload = */
	    Ice & operator=(Ice const &other);
        /* Other */
        AMateria* clone() const;
        void use(ICharacter& target);
};
