/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_baptiste.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoulard <bgoulard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 01:38:25 by bgoulard          #+#    #+#             */
/*   Updated: 2025/05/11 20:41:23 by bgoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <vector>

#define BYEL "\033[1;33m"
#define RESET "\033[0m"

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
// stl is forbiden for the exercises but this is a test main using stl in tests case is fine imo
    std::string zombieName;
    const char *tName = NULL;
    Zombie *ptr;

    std::cout << BYEL "newZombie tests::" RESET << std::endl;
    tName = "newZombie";
    zombieName = std::string(tName);

    for (int i = 0; i < numberOfTestZombies; i++) {
	    zombieName = std::string(tName) + itoa(i);
	    ptr = newZombie(zombieName.c_str());
	    ptr->announce();
	    if (i % 2 == 0) // push back in a vector to test persistance (and therefore use of new) outside of scope
    	    zombies_list.push_back(ptr);
    	else // delete to not leak memory
	        delete ptr;
    }

    std::cout << std::endl << BYEL "randomChump tests::" RESET << std::endl;
    tName = "randomChump";
    zombieName = std::string(tName);

    for (int i = 0; i < numberOfTestZombies; i++) {
	    zombieName += itoa(i);
	    randomChump(zombieName.c_str());
	    zombieName = std::string(tName);
    }

    std::cout << std::endl << BYEL "scopeTestZimbie tests::" RESET << std::endl;
    tName = "scopeTestZombie";
    for (int i = 0; i < numberOfTestZombies; i++)
	    scopeTestZombie();

    std::cout << std::endl << BYEL "newZombie persistance tests::" RESET << std::endl;
    for (size_t i = 0; i < zombies_list.size(); i++) {
	    zombies_list[i]->announce();
		delete zombies_list[i];
    }
    return 0;
}
