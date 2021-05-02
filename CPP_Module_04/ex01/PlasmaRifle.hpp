/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:52:46 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 17:07:30 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    public:
        /* Default Constructor */
        PlasmaRifle(void);
        /* Destructor */
        virtual ~PlasmaRifle(void);
        /* Copy constructor */
        PlasmaRifle (PlasmaRifle const &other);
        /* Operation overload = */
        PlasmaRifle &operator=(PlasmaRifle const &other);
        /* Other */
        void attack(void) const;
};
