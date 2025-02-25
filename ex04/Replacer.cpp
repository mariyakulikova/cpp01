/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:30:10 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/25 16:44:20 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer()
{}

Replacer::~Replacer()
{}

void Replacer::replace(string filename, string s1, string s2)
{
	if (s1.empty())
	{
		cerr << "s1 is empty" << endl;
		return ;
	}
	ifstream inFile(filename.c_str());
	if (!inFile)
	{
		cerr << "Error open file" << endl;
		return ;
	}
	stringstream buf;
	buf << inFile.rdbuf();
	string old_line = buf.str();
	string new_line;
	new_line.reserve(old_line.size());
	ofstream outFile(("new_" + filename).c_str());
	if (!outFile)
	{
		cerr << "Error open file" << endl;
		return ;
	}
	size_t pos = 0;
	size_t found = 0;
	while ((found = old_line.find(s1, pos)) != std::string::npos)
	{
		new_line.append(old_line, pos, found - pos);
		new_line.append(s2);
		pos = found + s1.length();
	}
	new_line.append(old_line, pos, old_line.size() - pos);
	outFile << new_line;
	outFile.close();
	inFile.close();
}
