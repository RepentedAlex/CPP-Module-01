#include "HumanA.hpp"

///CONSTRUCTORS/////////////////////////////////////////////////////////////////
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	PRINT_42;
}

///DESTRUCTORS//////////////////////////////////////////////////////////////////
HumanA::~HumanA()
{
	PRINT_42;
}

///GETTERS//////////////////////////////////////////////////////////////////////
std::string const	&HumanA::getName() const
{
	return (this->_name);
}

Weapon const	&HumanA::getWeapon() const
{
	return (this->_weapon);
}

///SETTERS//////////////////////////////////////////////////////////////////////
void	HumanA::setName(std::string name)
{
	this->_name = name;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
}

///MEMBER FUNCTIONS/////////////////////////////////////////////////////////////
void	HumanA::attack() const
{
	std::cout << this->getName() << " " <<
	"attacks with their " <<
	this->getWeapon().getType() <<
	std::endl;
}
