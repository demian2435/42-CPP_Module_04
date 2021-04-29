/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:04:22 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/29 16:45:17 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Victim
{
    protected:
        std::string name;
    public:
        Victim(std::string name);
        ~Victim(void);
        std::string getName(void);
        virtual void getPolymorphed(void) const;
};

std::ostream& operator<<(std::ostream &output, Victim &obj);
