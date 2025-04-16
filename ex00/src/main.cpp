#include "Zombie.hpp"

int	main()
{
	Zombie	zombie1("Johnny");

	zombie1.announce();
	randomChump("Shadow");
	Zombie *ptr = newZombie("V");
	ptr->announce();
	delete ptr;
	return (EXIT_SUCCESS);
}
