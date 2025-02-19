/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:51:05 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/19 10:20:07 by mkulikov         ###   ########.fr       */
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

void HumanB::setWeapon(Weapon& w)
{
	weapon = &w;
}

void HumanB::attack()
{
	if (weapon)
	{
		cout << name << " attacks with their " << weapon->getType() << endl;
	}
	else
	{
		cout << name << " has no weapon to attack with." << endl;
	}
}
