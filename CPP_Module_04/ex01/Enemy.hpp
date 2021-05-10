/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:52:39 by dmalori           #+#    #+#             */
/*   Updated: 2021/05/10 11:49:03 by dmalori          ###   ########.fr       */
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
        /* Default Constructor */
        Enemy() {}
    public:
        /* Constructor */
        Enemy(int hp, std::string const & type);
        /* Destructor */
        virtual ~Enemy();
        /* Copy constructor */
        Enemy (Enemy const &other);
        /* Operation overload = */
	    Enemy &operator=(Enemy const &other);
        /* Other */
        std::string const &getType() const;
        int getHP() const;
        virtual void takeDamage(int);
};
