#include "Zombie.hpp"

int	main( void )
{
	randomChump("test1");
	Zombie *ptr = newZombie("testnew");
	ptr->announce();
	delete ptr;
	return (0);
}
