/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LittleGuy.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:04:13 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 16:44:53 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Victim.hpp"

class LittleGuy : public virtual Victim
{
    public:
        LittleGuy(std::string name);
        ~LittleGuy(void);
        void getPolymorphed(void) const;
};
