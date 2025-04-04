#include "Zombie.hpp"

void	Zombie::name_zombie( std::string name )
{
	this->name = name;
}

Zombie*	zombieHorde( int N, std::string name)
{
	if (N <= 1)
	{
		std::cout << "Horde is plural, my friend" << std::endl;
		return (NULL);
	}
	Zombie *horde = new Zombie[N];
	if (!horde)
	{
		std::cout << "Couldn't allocate memory for the horde" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		horde[i].name_zombie(name);
	return (horde);
}
