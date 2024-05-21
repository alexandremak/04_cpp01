/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:33:36 by amak              #+#    #+#             */
/*   Updated: 2024/05/21 18:44:13 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Just because it's working doesn't mean it's fixed. You "
		"gotta DEBUG your code." << std::endl << std::endl;	
};

void	Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "In a world where people are always looking for INFO, "
		"secrets are like water in the desert." << std::endl << std::endl;
};

void	Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "Just a WARNING, the Mojave has a lot of unfriendly locals "
		"and even more unfriendly creatures." << std::endl << std::endl;
};

void	Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "System ERROR. Contact Administrator." << std::endl 
		<< std::endl;
};

void	Harl::complain(std::string level) {
	std:: string	levels[4];
	int				i;

	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";

	for (i = 0; i < 4; i++) {
		if (!levels[i].compare(level))
			break;
	}
	
	switch (i) {
		case 0:
			Harl::debug();
		case 1:
			Harl::info();
		case 2:
			Harl::warning();
		case 3:
			Harl::error();
			break;
		default:
			std::cerr << "[ Probably complaining about insignificant "
				"problems ]" << std::endl;
			break;
	}
};
