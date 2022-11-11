/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:00:59 by amiski            #+#    #+#             */
/*   Updated: 2022/11/10 21:18:20 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->weapon = NULL;
    this->name = name;
};

void HumanB::attack()
{
    if(this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
 void HumanB::setWeapon(Weapon weapon)
 {
    this->weapon = &weapon;
 }