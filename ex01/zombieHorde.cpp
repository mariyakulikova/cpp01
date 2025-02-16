/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:33:50 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/16 19:38:31 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, string name)
{
	Zombie *horde;

	if (N <= 0)
	{
		return NULL;
	}
	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		(horde + i)->setName(name);
	}
	return horde;
}
