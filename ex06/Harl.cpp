/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:41:11 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/24 17:39:09 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n" << endl;
}
void Harl::info(void)
{
	cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << endl;
}
void Harl::warning(void)
{
	cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << endl;
}
void Harl::error(void)
{
	cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now.\n" << endl;
}

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::complain(string level)
{
	int lvl = -1;
	string lvlstr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(lvlstr[i]) == 0)
		{
			lvl = i;
			break ;
		}
	}

	switch (lvl)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break ;
		default:
			cout << "[ Probably complaining about insignificant problems ]" << endl;
	}
}
