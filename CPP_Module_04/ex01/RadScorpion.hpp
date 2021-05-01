/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:52:56 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 18:36:36 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public:
        /* Default Constructor */
        RadScorpion(void);
        /* Destructor */
        virtual ~RadScorpion(void);
        /* Copy constructor */
        RadScorpion (RadScorpion const &other);
        /* Operation overload = */
	    RadScorpion &operator=(RadScorpion const &other);
};
