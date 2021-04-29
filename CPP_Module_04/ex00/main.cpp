/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:04:06 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 16:47:10 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "LittleGuy.hpp"

int main (void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	LittleGuy gino("Gino");
	std::cout << robert << jim << joe << gino;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(gino);
	return 0;
}
