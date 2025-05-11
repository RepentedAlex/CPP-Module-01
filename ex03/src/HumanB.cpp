#include "HumanB.hpp"

/*
HumanB::HumanB() : _name("HumanB"), _weapon(NULL)
{}

// why do you not init the weapon to NULL in here ?!
HumanB::HumanB(std::string name) : _name(name)
{}
*/

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{}

HumanB::~HumanB()
{}

void	HumanB::attack() const
{
	//std::string is_armed = this->_weapon->getType(); // dumbass.
	// if weapon is null getType will segfault

	if (this->_weapon == NULL)
	{
		std::cout << _name <<
			"(HumanB) tries to attack but he's got no weapon!" << std::endl;
		return ;
	}
	// use the name instead of just HumanB for the mesage no ?
	// prettier
	std::cout << _name << " (HumanB) attacks with their " <<
	this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->_weapon = &weapon;
}
