#include "HumanB.hpp"

///CONSTRUCTORS/////////////////////////////////////////////////////////////////
HumanB::HumanB() : _name("HumanB"), _weapon(NULL)
{
	PRINT_42;
}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	PRINT_42;
}

///DESTRUCTORS//////////////////////////////////////////////////////////////////
HumanB::~HumanB()
{
	PRINT_42;
}

///GETTERS//////////////////////////////////////////////////////////////////////
std::string const	&HumanB::getName() const
{
	return (this->_name);
}

Weapon	*HumanB::getWeapon() const
{
	return (this->_weapon);
}

///SETTERS//////////////////////////////////////////////////////////////////////
void	HumanB::setName(std::string name)
{
	this->_name = name;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

///MEMBER FUNCTIONS/////////////////////////////////////////////////////////////
void	HumanB::attack() const
{
//	std::string is_armed = this->_weapon->getType();

//	if (is_armed[0] == 0)
	if (this->_weapon == NULL)
	{
		std::cout << "HumanB tries to attack but he's got no weapon!" << std::endl;
		return ;
	}
	std::cout << this->getName() << " " <<
	"attacks with their " <<
	this->getWeapon()->getType() <<
	std::endl;
}

