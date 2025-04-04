#include "Zombie.hpp"

#define N 42

int	main( void )
{
	Zombie *ptr = zombieHorde(N, "test");
	for (int i = 0; i < N; i++)
		ptr[i].announce();
	return (0);
}
