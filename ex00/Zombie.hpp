/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:19:48 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/16 18:20:17 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Zombie
{
private:
	string name;
public:
	Zombie();
	Zombie(const string &name);
	Zombie(const Zombie &other);
	Zombie &operator=(const Zombie &other);
	~Zombie();
	void announce(void) const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
