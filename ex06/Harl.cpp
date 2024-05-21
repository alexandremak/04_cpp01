/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:33:36 by amak              #+#    #+#             */
/*   Updated: 2024/05/21 22:33:04 by amak             ###   ########.fr       */
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
			this->Harl::debug();
			// fall through
		case 1:
			this->Harl::info();
			// fall through
		case 2:
			this->Harl::warning();
			// fall through
		case 3:
			this->Harl::error();
			break;
		default:
			std::cerr << "[ Probably complaining about insignificant "
				"problems ]" << std::endl;
			break;
	}
};
