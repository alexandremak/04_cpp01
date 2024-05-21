/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:50:24 by amak              #+#    #+#             */
/*   Updated: 2024/05/21 18:42:36 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cctype>

std::string toUpperCase(const std::string &str) {
    std::string result = str;
    for (int i = 0; result[i]; i++) {
        result[i] = std::toupper(result[i]);
    }
    return result;
}

int	main() {
	Harl		harlObject;
	std::string	input;

	std::cout << "Insert your complain level < DEBUG / INFO / WARNING / "
		"ERROR > : ";
	std::cin >> input;
	harlObject.complain(toUpperCase(input));
}
