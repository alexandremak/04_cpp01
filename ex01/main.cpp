/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:33:02 by amak              #+#    #+#             */
/*   Updated: 2024/05/03 23:33:48 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	int n = 5;
	Zombie *horde = zombieHorde(n, "Teste");
	
	for(int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
}
