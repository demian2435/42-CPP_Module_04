/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:52:51 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 17:33:52 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
        /* Default Constructor */
        PowerFist(void);
        /* Destructor */
        virtual ~PowerFist(void);
        /* Copy constructor */
        PowerFist (PowerFist const &other);
        /* Operation overload = */
        PowerFist &operator=(PowerFist const &other);
        /* Other */
        void attack(void) const;
};
