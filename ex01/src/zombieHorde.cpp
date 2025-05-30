#include "Zombie.hpp"

Zombie*	zombieHorde(const int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << "A horde cannot be empty my friend." << std::endl;
		return (NULL);
	}
	Zombie *horde = new Zombie[N];
	if (!horde)
	{
		std::cout << "Couldn't allocate memory for the horde" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
