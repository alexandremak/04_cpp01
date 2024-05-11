/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:50:29 by amak              #+#    #+#             */
/*   Updated: 2024/05/11 23:55:55 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::debug(void) {
	std::cout << "Just because it's working doesn't mean it's fixed. You "
		"gotta DEBUG your code." << std::endl;	
};

void	Harl::info(void) {
	std::cout << "In a world where people are always looking for INFO, "
		"secrets are like water in the desert." << std::endl;
};

void	Harl::warning(void) {
	std::cout << "Just a WARNING, the Mojave has a lot of unfriendly locals "
		"and even more unfriendly creatures." << std::endl;
};

void	Harl::error(void) {
	std::cout << "System ERROR. Contact Administrator." << std::endl;
};

void	Harl::complain(std::string level) {
	std:: string	levels[4];
	void			(Harl::*functionPtrDebug[4])(void);
	int				found = 0;

	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	
	functionPtrDebug[0] = &Harl::debug;
	functionPtrDebug[1] = &Harl::info;
	functionPtrDebug[2] = &Harl::warning;
	functionPtrDebug[3] = &Harl::error;
	
	for (int i = 0; i < 4; i++) {
		if (!levels[i].compare(level))
		{
			(this->*functionPtrDebug[i])();
			found = 1;
			break;
		}
	}
	if(!found)
	{
		std::cerr << "Error: Invalid complain level!" << std::endl;
	}
};
