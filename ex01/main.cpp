/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:04:16 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/16 19:35:49 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int size;

	size = 5;
	horde = zombieHorde(size, "Pippa");
	for (int i = 0; i < size; i++)
	{
		cout << "index " << i << " ";
		(horde + i)->announce();
	}
	delete[] horde;
	return 0;
}
