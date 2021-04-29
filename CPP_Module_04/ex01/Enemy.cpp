/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:52:37 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 17:41:42 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : hp(hp), type(type) {}

Enemy::~Enemy(void) {}

std::string const &Enemy::getType(void) const
{
    return this->type;
}

int Enemy::getHP(void) const
{
    return this->hp;
}

void Enemy::takeDamage(int damage)
{
    this->hp -= damage;
    if (this->hp < 0)
        this->hp = 0;
}
