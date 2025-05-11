/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_baptiste.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoulard <bgoulard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 22:10:15 by bgoulard          #+#    #+#             */
/*   Updated: 2025/05/11 21:05:57 by bgoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <ostream>

#define RED "\033[0;31m"
#define GRN "\033[0;32m"
#define YEL "\033[0;33m"

#define BYEL "\033[1;33m"
#define RESET "\033[0m"

#define CLUB "crude spiked club"
#define OTHER_CLUB "some other type of club"
#define COOL_CLUB "custom club with sick flames"

int main() {
	std::cout << BYEL << "HumanA + club test::" RESET << std::endl;
    { // test subject 01
		Weapon club = Weapon(CLUB);
		HumanA bob("Bob", club);

		bob.attack();
		std::cout << YEL "modifying club weapon without re-setting as '" <<
		bob.getName() << "' weapon" RESET << std::endl;
		club.setType(OTHER_CLUB);
		bob.attack();
    }
    std::cout << "---" << std::endl;
	std::cout << BYEL << "HumanB + empty attack + club::" RESET << std::endl;
    { // test subject 02
		Weapon club = Weapon(CLUB);
		HumanB jim("Jim");

		jim.attack();
		std::cout << YEL "setting club as weapon" RESET << std::endl;
		jim.setWeapon(club);
		jim.attack();
		std::cout << YEL "modifying club weapon without re-setting as '" <<
		jim.getName() << "' weapon" RESET << std::endl;
		club.setType(OTHER_CLUB);
		jim.attack();
    }
    std::cout << "---" << std::endl;
    std::cout << BYEL << "fight scene test::" RESET << std::endl;
	{ // custom test 03
		Weapon cool_club	= Weapon(COOL_CLUB);
		Weapon club			= Weapon(CLUB);

		HumanA bob("Bob", club);
		HumanB jim("Jim");

		bob.attack();
		jim.attack();

		jim.setWeapon(cool_club);

		bob.attack();
		jim.attack();
		std::cout << GRN << jim.getName() << RESET " triumphs over " RED
		<< bob.getName() << RESET " using his " YEL
		<< (*jim.getWeapon()).getType() << RESET << std::endl;
    }
    return (0);
}
