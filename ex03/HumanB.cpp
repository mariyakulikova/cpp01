/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:51:05 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/17 18:04:36 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const string &name)
	: name(name)
	, weapon(NULL)
{}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon w)
{
	weapon = &w;
}

void HumanB::attack()
{
	cout << name << " attacks with their " << weapon->getType() << endl;
}
