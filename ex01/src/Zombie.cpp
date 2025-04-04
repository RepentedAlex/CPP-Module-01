#include "Zombie.hpp"

Zombie::Zombie( void)
{}

Zombie::~Zombie()
{
	std::cout << "Destroyed:" << this->name << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
