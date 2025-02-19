/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:41:23 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/19 09:26:14 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class HumanA
{
private:
	string name;
	Weapon &weapon;

public:
	HumanA(const string &name, Weapon &weapon);
	~HumanA();
	void attack();
};

#endif
