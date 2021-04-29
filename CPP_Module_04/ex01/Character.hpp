/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:52:34 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 18:55:25 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{
    private:
        std::string name;
        int ap;
        AWeapon *weapon;
    public:
        Character(std::string const &name);
        ~Character(void);
        void recoverAP(void);
        void equip(AWeapon*);
        void attack(Enemy*);
        std::string const &getName(void) const;
        int getAp(void);
        AWeapon *getWeapon(void);
};

std::ostream& operator << (std::ostream &output, Character &obj);
