/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:36:34 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/17 18:05:16 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const string &type)
	:type(type)
{
}

Weapon::~Weapon()
{
}

string Weapon::getType() const
{
	return type;
}

void Weapon::setType(const string &str)
{
	type = str;
}
