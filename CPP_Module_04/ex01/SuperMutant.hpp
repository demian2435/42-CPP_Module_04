/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:53:00 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 18:34:30 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        /* Default Constructor */
        SuperMutant(void);
        /* Destructor */
        virtual ~SuperMutant(void);
        /* Copy constructor */
        SuperMutant (SuperMutant const &other);
        /* Operation overload = */
	    SuperMutant &operator=(SuperMutant const &other);
        /* Other */
        void takeDamage(int);
};
