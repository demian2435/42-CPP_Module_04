/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:04:17 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 16:38:48 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"
#include "LittleGuy.hpp"

class Sorcerer
{
	private:
		std::string name;
		std::string title;
	    /* Default Constructor */
		Sorcerer() {}
	public:
        /* Constructor  */
		Sorcerer(std::string name, std::string title);
        /* Destructor */
		~Sorcerer(void);
        /* Copy constructor */
        Sorcerer (Sorcerer const &other);
        /* Operation overload = */
	    Sorcerer &operator=(Sorcerer const &other);
        /* Other */
		void polymorph(Victim const &) const;
		std::string getName(void);
		std::string getTitle(void);
};

std::ostream& operator << (std::ostream &output, Sorcerer &obj);
