/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:24:31 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/19 10:30:07 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
#define REPLACER_HPP

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Replacer
{
private:
	string fileName;
	string s1;
	string s2;
public:
	Replacer(const string& fileName, const string& s1, const string& s2);
	~Replacer();
};

#endif
