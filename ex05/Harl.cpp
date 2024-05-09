/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:50:29 by amak              #+#    #+#             */
/*   Updated: 2024/05/09 21:04:11 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::debug(void) {
	std::cout << "Just because it's working doesn't mean it's fixed. You \
		gotta debug your code." << std::endl;	
};

void	Harl::info(void) {
	std::cout << "In a world where people are always looking for info, \
		secrets are like water in the desert." << std::endl;
};

void	Harl::warning(void) {
	std::cout << "Just a warning, the Mojave has a lot of unfriendly locals \
		and even more unfriendly creatures." << std::endl;
};

void	Harl::error(void) {
	std::cout << "System error. Contact Administrator." << std::endl;
};

void	Harl::complain(std::string level) {
	void (*functionPtrDebug)();
	
	functionPtrDebug = &debug;
	
	 
};
