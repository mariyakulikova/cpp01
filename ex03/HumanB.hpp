/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:35:20 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/19 10:19:43 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class HumanB
{
private:
	string name;
	Weapon *weapon;
public:
	HumanB(const string &name);
	~HumanB();
	void setWeapon(Weapon& w);
	void attack();
};




#endif
