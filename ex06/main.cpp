/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:40:01 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/24 12:17:42 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char ** argv)
{
	Harl harl;

	if (argc != 2)
		return 0;
	harl.complain(argv[1]);
	return 0;
}
