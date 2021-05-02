/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 15:19:03 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/30 18:13:13 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Cure : public AMateria
{
    public:
        /* Default Constructor */
        Cure(void);
        /* Destructor */
        ~Cure(void);
        /* Copy constructor */
        Cure(Cure const &other);
        /* Operation overload = */
	    Cure & operator=(Cure const &other);
        /* Other */
        AMateria* clone() const;
        void use(ICharacter& target);
};
