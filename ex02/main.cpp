/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:07:36 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/16 20:18:21 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

int main(void)
{
	string str;
	string* stringPTR;
	string& stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;

	cout << "The memory address of the string variable - " << &str << endl;
	cout << "The memory address held by stringPTR - " << stringPTR << endl;
	cout << "The memory address held by stringREF - " << &stringREF << endl;

	cout << "The value of the string variable - " << str << endl;
	cout << "The value pointed to by stringPTR - " << *stringPTR << endl;
	cout << "The value pointed to by stringREF - " << stringREF << endl;
	return 0;
}
