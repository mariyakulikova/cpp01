/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:41:11 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/24 19:59:00 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::debug(void)
{
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n" << endl;
}
void Harl::info(void)
{
	cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << endl;
}
void Harl::warning(void)
{
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << endl;
}
void Harl::error(void)
{
	cout << "This is unacceptable! I want to speak to the manager now.\n" << endl;
}

void complain(string level)
{
	typedef void (Harl::*Func)(void);
	string lvl[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	Func funcs[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(lvl[i]) == 0)
		{
			this->*funcs[i]();
			return ;
		}
	}
	cout << "Probably complaining about insignificant problems" << endl;
}
