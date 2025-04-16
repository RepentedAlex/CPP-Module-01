#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
	public:
		Zombie();
		explicit Zombie(std::string name);
		~Zombie();
		void	announce();

	private:
		std::string _name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif //ZOMBIE_H
