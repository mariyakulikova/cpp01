/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:40:01 by mkulikov          #+#    #+#             */
/*   Updated: 2025/02/24 19:50:32 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;

	cout << "[ DEBUG ]" <<endl;
	harl.complain("DEBUG");
	cout << "[ INFO ]" <<endl;
	harl.complain("INFO");
	cout << "[ WARNING ]" <<endl;
	harl.complain("WARNING");
	cout << "[ ERROR ]" <<endl;
	harl.complain("ERROR");
	cout << "[ SOMETHING ]" <<endl;
	harl.complain("SOMETHING");
}
