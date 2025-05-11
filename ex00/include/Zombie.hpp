#ifndef ZOMBIE_H
#define ZOMBIE_H

// pourquoi tu le fous ici ton iostream ?
// mets le dans le .cpp, c'est ton .cpp qui en as besoin pas ton .hpp

#include <iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce();

// get+setter missing...
		void	setName(std::string name) { this->_name = name; }
		std::string	getName() const { return this->_name; }
	private:
		std::string	_name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif //ZOMBIE_H
