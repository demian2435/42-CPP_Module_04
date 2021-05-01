/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wolf.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:52:56 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/30 14:17:13 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Enemy.hpp"

class Wolf : public Enemy
{
    public:
        /* Default Constructor */
        Wolf(void);
        /* Destructor */
        virtual ~Wolf(void);
        /* Copy constructor */
        Wolf (Wolf const &other);
        /* Operation overload = */
	    Wolf &operator=(Wolf const &other);
};
