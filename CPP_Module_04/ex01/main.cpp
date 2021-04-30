/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:52:22 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/30 14:18:47 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "Granade.hpp"
#include "Wolf.hpp"

int main (void)
{
    Character* me = new Character("me");
    std::cout << *me;
    Enemy* b = new RadScorpion();
    Enemy* m = new SuperMutant();
    Enemy *w = new Wolf();
    AWeapon *g = new Granade();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->equip(g);
    me->attack(m);
    me->attack(w);
    me->attack(b);
    me->attack(m);
    std::cout << *me;
    me->equip(nullptr);
    std::cout << *me;
    delete (m);
    delete (b);
    delete (pr);
    delete (pf);
    delete (me);
    delete (g);
    delete (w);
    return 0;
}
