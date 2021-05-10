/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 15:19:03 by dmalori           #+#    #+#             */
/*   Updated: 2021/05/10 11:56:01 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
    protected:
        std::string _type;
        unsigned int _xp;
        /* Default Constructor */
        AMateria() {}
    public:
        /* Constructor  */
        AMateria(std::string const & type);
        /* Destructor */
        virtual ~AMateria();
        /* Copy constructor */
        AMateria (AMateria const &other);
        /* Operation overload = */
	    AMateria &operator=(AMateria const &other);
        /* Other */
        std::string const & getType() const; //Returns the materia type
        unsigned int getXP() const; //Returns the Materia's XP
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};
