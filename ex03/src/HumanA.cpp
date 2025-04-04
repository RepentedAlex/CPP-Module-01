#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name( name ), _weapon(weapon)
{}

HumanA::~HumanA()
{}

void	HumanA::attack()
{
	std::cout << "HumanA " <<
	"attacks with their " <<
	this->_weapon.getType() <<
	std::endl;
}
