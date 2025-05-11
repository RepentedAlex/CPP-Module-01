#include "HumanA.hpp"

// subject 01:
// HumanB may not always have a Weapon, whereas HumanA will always be armed.
//
// _weapon(NULL) is therefore wrong.
// why even have HumanA::HumanA?
// HumanA::HumanA() : _name("HumanA"), _weapon(NULL) {}

HumanA::HumanA( std::string name, Weapon &weapon ) : _name( name ), _weapon(&weapon)
{}

HumanA::~HumanA()
{}

void	HumanA::attack() const
{
	std::cout << _name << " (HumanA) attacks with their " <<
	this->_weapon->getType() <<	std::endl;
}
