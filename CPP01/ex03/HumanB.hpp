/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:00:16 by amiski            #+#    #+#             */
/*   Updated: 2022/11/10 21:22:20 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"Weapon.hpp"

class HumanB 
{
    private:
        Weapon *weapon;
        std::string name;
    public:
        HumanB(std::string name);
        void setWeapon(Weapon weapon);
        // ~HumanB();
        void attack();
};