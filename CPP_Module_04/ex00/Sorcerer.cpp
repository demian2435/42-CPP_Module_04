/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:04:15 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 16:38:11 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title)
{
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::getName(void)
{
	return this->name;
}

std::string Sorcerer::getTitle(void)
{
	return this->title;
}

void Sorcerer::polymorph(Victim const &v)
{
	v.getPolymorphed();
}

std::ostream& operator<<(std::ostream &output, Sorcerer &obj)
{
	output << "I am " << obj.getName() << ", " << obj.getTitle() << ", and I like ponies!" << std::endl;
	return (output);
}
