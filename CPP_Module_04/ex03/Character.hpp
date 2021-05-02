/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 16:50:49 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/30 18:26:01 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

class Character : public virtual ICharacter
{
    private:
        std::string name;
        AMateria *list[4];
    public:
        /* Default Constructor */
        Character() {}
        /* Constructor  */
        Character(std::string name);
        /* Destructor */
        ~Character();
        /* Copy constructor */
        Character(Character &other);
        /* Operation overload = */
        Character &operator = (Character &other);
        /* Other */
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};
