/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:24:31 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/25 16:09:28 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
#define REPLACER_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using std::string;
using std::getline;
using std::cout;
using std::cerr;
using std::endl;
using std::size_t;
using std::ifstream;
using std::ofstream;
using std::stringstream;

class Replacer
{
public:
	Replacer();
	~Replacer();
	void replace(string filename, string s1, string s2);
};

#endif
