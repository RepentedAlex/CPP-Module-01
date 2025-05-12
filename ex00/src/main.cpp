#include "Zombie.hpp"

int	main()
{
	Zombie	zombie1("zombie_main");

	zombie1.announce();
	randomChump("zombie_randomChump");
	Zombie *ptr = newZombie("zombie_newZombie");
	ptr->announce();
	delete ptr;
	return (0);
}
