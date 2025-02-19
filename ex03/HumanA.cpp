/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:42:53 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/19 09:26:09 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const string &name, Weapon &weapon)
	: name(name)
	, weapon(weapon)
{}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	cout << name << " attacks with their " << weapon.getType() << endl;
}
