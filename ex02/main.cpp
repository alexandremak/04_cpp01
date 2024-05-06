/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amak <amak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 22:14:33 by amak              #+#    #+#             */
/*   Updated: 2024/05/03 22:27:35 by amak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main() {
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "&string - memory address: " << &string << std::endl;
	std::cout << "stringPTR - memory address: "<< stringPTR << std::endl;
	std::cout << "&stringPTR - memory address: "<< &stringREF << std::endl;
	
	std::cout << std::endl;

	std::cout << "string - value: " << string << std::endl;
	std::cout << "*stringPTR - value: "<< *stringPTR << std::endl;
	std::cout << "stringREF - value: "<< stringREF << std::endl;
}
