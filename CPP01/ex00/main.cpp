/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:32:20 by amiski            #+#    #+#             */
/*   Updated: 2022/11/10 01:45:38 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
    Zombie a;
    Zombie *b;
    b = newZombie("hamza");
    b->announce();
    a.setName("Foo");
    randomChump("fff");
    a.announce();
    b->announce();
    b->announce();
    b->announce();
    b->announce();
    delete b;
    a.announce();
    a.announce();
    a.announce();
    a.announce();
    a.announce();
    a.announce();
}