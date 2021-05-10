/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:52:30 by dmalori           #+#    #+#             */
/*   Updated: 2021/05/10 11:48:46 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class AWeapon
{
    protected:
        std::string name;
        int apcost;
        int damage;
        /* Default Constructor */
        AWeapon() {}
    public:
        /* Constructor  */
        AWeapon(std::string const & name, int apcost, int damage);
        /* Destructor */
        virtual ~AWeapon(void);
        /* Copy constructor */
        AWeapon (AWeapon const &other);
        /* Operation overload = */
	    AWeapon &operator=(AWeapon const &other);
        /* Other */
        std::string const & getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;
};
