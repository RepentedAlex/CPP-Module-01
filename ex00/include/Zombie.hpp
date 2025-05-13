#ifndef ZOMBIE_H
#define ZOMBIE_H

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
			Zombie(std::string name);
		// Destructors
			~Zombie();
		// Getters
			std::string	const	&getName() const;
		// Setters
			void				setName(std::string name);
		// Member functions
			void				announce();

	private:
		std::string	_name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif //ZOMBIE_H
