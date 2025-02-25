/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:25:29 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/25 15:56:03 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

int main(int argc, char **argv) {
	if (argc != 4)
		return 0;
	Replacer replacer;
	string filename(argv[1]);
	string s1(argv[2]);
	string s2(argv[3]);
	replacer.replace(filename, s1, s2);
	return 0;
}
