#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string fname);
		~Zombie();
		void	announce();
		void	name_zombie(std::string name); // this function is never implemented lmao

	// missing getter and setter
		void	setName(std::string name) { this->_name = name; }
		std::string	getName() const { return this->_name; }
	private:
		std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif //ZOMBIE_H
