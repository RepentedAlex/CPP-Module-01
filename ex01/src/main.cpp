#include "Zombie.hpp"

#define N 42

int	main()
{
	Zombie *ptr = zombieHorde(N, "test");
	for (int i = 0; i < N; i++)
	{
		std::cout << "Zombie[" << i << "]";
		ptr[i].announce();
	}
	std::cout << std::endl;
	delete[] ptr;
	return (0);
}
