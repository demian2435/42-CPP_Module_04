/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 18:12:22 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/30 18:40:54 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *list[4];
        int index;
    public:
        /* Default Constructor */
        MateriaSource ();
        /* Destructor */
        ~MateriaSource();
        /* Copy constructor */
        MateriaSource(MateriaSource const & other);
        /* Operation overload = */
	    MateriaSource & operator=(MateriaSource const & other);
        /* Other */
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};
