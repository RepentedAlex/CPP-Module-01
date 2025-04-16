#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	auto* ptr = new Zombie(name);

	return (ptr);
}
