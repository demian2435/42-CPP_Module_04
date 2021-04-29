/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:04:13 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 16:43:10 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : public virtual Victim
{
    public:
        Peon(std::string name);
        ~Peon(void);
        void getPolymorphed(void) const;
};
