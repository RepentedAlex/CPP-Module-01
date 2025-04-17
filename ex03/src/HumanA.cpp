#include "HumanA.hpp"
#include "../include/HumanA.hpp"

HumanA::HumanA() : _name("HumanA"), _weapon(NULL)
{}

HumanA::HumanA( std::string name, Weapon &weapon ) : _name( name ), _weapon(&weapon)
{}

HumanA::~HumanA()
{}

void	HumanA::attack() const
{
	std::cout << "HumanA " <<
	"attacks with their " <<
	this->_weapon->getType() <<
	std::endl;
}
