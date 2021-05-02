/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Granade.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:11:39 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/30 14:12:45 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AWeapon.hpp"

class Granade : public AWeapon
{
    public:
        /* Default Constructor */
        Granade(void);
        /* Destructor */
        virtual ~Granade(void);
        /* Copy constructor */
        Granade (Granade const &other);
        /* Operation overload = */
        Granade &operator=(Granade const &other);
        /* Other */
        void attack(void) const;
};
