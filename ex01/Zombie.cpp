/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:21:16 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/16 19:38:58 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
	: name("")
{
	cout << "Zombie " << name << "created" << endl;
}

Zombie::Zombie(const string &name)
	: name(name)
{
	cout << "Zombie " << name << " created" << endl;
}

Zombie::Zombie(const Zombie &other)
{
	name = other.name;
	cout << "Zombie " << name << " copiedr" << endl;
}

Zombie &Zombie::operator=(const Zombie &other)
{
	if (this != &other)
	{
		name = other.name;
		cout << "Zombie " << name << " assigned" << endl;
	}
	return *this;
}

Zombie::~Zombie()
{
	cout << name << " destroyed" << endl;
}

void Zombie::setName(const string &str)
{
	name = str;
}

void Zombie::announce(void) const
{
	cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}
