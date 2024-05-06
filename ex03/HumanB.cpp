/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 23:01:46 by amak              #+#    #+#             */
/*   Updated: 2024/05/03 23:27:08 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {
	weapon = NULL;
}

HumanB::~HumanB() {}

void	HumanB::attack() {
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() 
		<< std::endl;
	else
		std::cout << name << " attacks with his bare hands!" << std::endl;
}

void	HumanB::setWeapon(Weapon &armWeapon) {
	this->weapon = &armWeapon;
}
