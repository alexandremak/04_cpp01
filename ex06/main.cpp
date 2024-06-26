/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:33:11 by amak              #+#    #+#             */
/*   Updated: 2024/05/22 22:12:58 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	Harl		harlObject;

	if (argc == 2) {
		harlObject.complain(argv[1]);
		return (0);
	}
	std::cout << "Error: Invalid number of arguments!" << std::endl;
}
