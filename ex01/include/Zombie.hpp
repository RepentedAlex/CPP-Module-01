#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

#define PRINT_42 \
do \
{ \
	std::cout << __PRETTY_FUNCTION__ << "\t called" << std::endl; \
} \
while (0)

class Zombie
{
	public:
		// Constructors
			Zombie();
		// Destructors
			~Zombie();
		// Getters
			std::string	const getName() const;
		// Setters
			void	setName(std::string name);
		// Member functions
			void	announce();

	private:
		std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif //ZOMBIE_H
