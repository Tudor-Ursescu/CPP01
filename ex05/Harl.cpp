/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:34:02 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/06 13:11:55 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
    std::cout << BLUE << "Harl was created" << RESET << '\n';
}

Harl::~Harl() {
    std::cout << RED << "Harl was destroyed" << RESET << '\n';
}

void Harl::debug() {
    std::cout << PINK << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << RESET << '\n';
}

void Harl::info() {
    std::cout << CYAN << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET << '\n';
}

void Harl::warning() {
    std::cout << LAVENDER << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << RESET << '\n';
}

void Harl::error( void ) {
    std::cout << LIGHT_YELLOW << "This is unacceptable! I want to speak to the manager now." << RESET << '\n';
}

void Harl::complain(std::string level) {
    //array of function pointers
    void (Harl::*functionPointers[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    //array of level names
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    //compare the input with the all the members of the level array, and if any match, call the
    //respective method
    for (int i = 0; i < 4; i++) {
        if (level == levels[i]) {
            (this->*functionPointers[i])();
            return ;
        }
    }
    std::cout << YELLOW << "Unknown complaint level: " << level << RESET << '\n';
}