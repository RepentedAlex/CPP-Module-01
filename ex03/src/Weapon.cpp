#include "Weapon.hpp"

Weapon::Weapon( std::string type) : _type( type )
{}

Weapon::~Weapon()
{}

std::string	Weapon::getType()
{
	std::string	&ret = this->_type;
	return (ret);
}

void		Weapon::setType( std::string str )
{
	this->_type = str;
}
