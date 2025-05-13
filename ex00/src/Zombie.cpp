#include "Zombie.hpp"

///CONSTRUCTORS////////////////////////////////////////////////////////////////
Zombie::Zombie()
{
	PRINT_42;
}

Zombie::Zombie(std::string name) : _name(name)
{
	PRINT_42;
}

///DESTRUCTORS/////////////////////////////////////////////////////////////////
Zombie::~Zombie()
{
	PRINT_42;
	std::cout << "Destroyed:" << this->_name << std::endl;
}

///MEMBER FUNCTIONS////////////////////////////////////////////////////////////
void	Zombie::announce()
{
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
