#include "HumanB.hpp"
#include "../include/HumanB.hpp"

HumanB::HumanB() : _name("HumanB"), _weapon(NULL)
{}

HumanB::HumanB(std::string name) : _name(name)
{}

HumanB::~HumanB()
{}

void	HumanB::attack() const
{
	std::string is_armed = this->_weapon->getType();

	if (is_armed[0] == 0)
	{
		std::cout << "HumanB tries to attack but he's got no weapon!" << std::endl;
		return ;
	}
	std::cout << "HumanB " <<
	"attacks with their " <<
	this->_weapon->getType() <<
	std::endl;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->_weapon = &weapon;
}
