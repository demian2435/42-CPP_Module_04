/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:52:39 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 17:37:59 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Enemy
{
    protected:
        int hp;
        std::string type;
    public:
        Enemy(int hp, std::string const & type);
        virtual ~Enemy();
        std::string const &getType() const;
        int getHP() const;
        virtual void takeDamage(int);
};
