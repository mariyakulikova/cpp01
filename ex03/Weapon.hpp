/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:35:30 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/17 18:01:07 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Weapon
{
private:
	string type;

public:
	Weapon(const string &type);
	~Weapon();
	string getType() const;
	void setType(const string &str);
};

#endif




