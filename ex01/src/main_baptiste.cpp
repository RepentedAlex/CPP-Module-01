/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_baptiste.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoulard <bgoulard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 01:38:25 by bgoulard          #+#    #+#             */
/*   Updated: 2025/05/11 20:57:43 by bgoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <vector>

#include <cstdlib>
#include <ctime>

#define BYEL	"\033[1;33m"
#define BRED	"\033[1;31m"
#define RESET	"\033[0m"

#define numberOfTestZombies 8

void scopeTestZombie(void) {
    Zombie zombie;

    zombie.setName("ZombieScope");
    zombie.announce();
    zombie.setName("ZombieScope Renamed");
    zombie.announce();
    return;
}

std::string itoa(int i) {
    std::string res;
    char tmp[20] = {0};
    int offset = 0;

    if (i < 0) {
	tmp[offset++] = '-';
	i = -i;
    }
    if (i == 0) {
	tmp[offset++] = '0';
    }
    while (i > 0) {
	tmp[offset++] = i % 10 + '0';
	i /= 10;
    }
    res = std::string(tmp);
    return res;
}

int main(void) {
    std::vector<Zombie *> zombies_list;
    std::string zombieName;
    const char *tName = NULL;

/*				- commented as you left newZombie and randomChump in previous ex
    Zombie *ptr;

    // -----------------------------------------------------------------------
    std::cout << BYEL "newZombie tests::" RESET << std::endl;
    tName = "newZombie";
    zombieName = std::string(tName);
    for (int i = 0; i < numberOfTestZombies; i++) {
		zombieName = std::string(tName) + itoa(i);
		ptr = newZombie(zombieName.c_str());
		ptr->announce();
		if (i % 2 == 0) // push back in a vector to test persistance (and
				// therefore use of new) outside of scope
			zombies_list.push_back(ptr);
		else
			delete ptr;
    }
	std::cout << std::endl;

    // -----------------------------------------------------------------------
    std::cout << BYEL "randomChump tests::" RESET << std::endl;
    tName = "randomChump";
    zombieName = std::string(tName);
    for (int i = 0; i < numberOfTestZombies; i++) {
		zombieName += itoa(i);
		randomChump(zombieName.c_str());
		zombieName = std::string(tName);
    }
	std::cout << std::endl;

    // -----------------------------------------------------------------------
    std::cout << BYEL "scopeTestZombie tests::" RESET << std::endl;
    tName = "scopeTestZombie";
    for (int i = 0; i < numberOfTestZombies; i++)
		scopeTestZombie();
	std::cout << std::endl;

    // -----------------------------------------------------------------------
    std::cout << BYEL "newZombie persistance tests::" RESET << std::endl;
    for (size_t i = 0; i < zombies_list.size(); i++)
		zombies_list[i]->announce();
	std::cout << std::endl;
*/

    // -----------------------------------------------------------------------
	tName = "zombieHorde";
    std::cout << BYEL "zombieHorde tests::" RESET << std::endl;
	std::cout << "ZombieHorde size: " << -1 << std::endl;
	Zombie *zombies = zombieHorde(-1, tName);
	if (zombies != NULL)
		std::cout << BRED "ZombieHorde size: " << -1 << "works when it shouldn't." RESET << std::endl;
	std::cout << std::endl;
	std::cout << "ZombieHorde size: " << numberOfTestZombies << std::endl;
    zombies = zombieHorde(numberOfTestZombies, tName);

    // changing the name of a random zombie as a test
    srand(time(NULL));
    int target = rand() % numberOfTestZombies;
    zombieName = std::string(tName) + itoa(target);
    if (numberOfTestZombies > target && target >= 0)
		zombies[target].setName(zombieName.c_str()); // -1 for the 0th zombie

    for (int i = 0; i < numberOfTestZombies; i++)
		zombies[i].announce();
    delete[] zombies;
	std::cout << std::endl;
/*
    // -----------------------------------------------------------------------
    // will always be the last step as list is discarded in main- the object
    // contained are also discarded
    std::cout << BYEL "newZombie persistance destroy::" RESET << std::endl;
    for (size_t i = 0; i < zombies_list.size(); i++)
		delete zombies_list[i];
	std::cout << std::endl;
*/
	return 0;
}
