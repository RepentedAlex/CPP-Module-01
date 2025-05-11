#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>

#include "Weapon.hpp"

class HumanB
{
	public:
	//	HumanB(std::string name);
	//	HumanB();
	// use default values to auto generate
	// constructor with no std::string ->
		HumanB(std::string name = "HumanB");
		~HumanB();
		void	attack() const;
		void	setWeapon(Weapon &weapon);

		std::string	getName() const { return this->_name; }
		Weapon	*getWeapon() const { return this->_weapon; }
	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif //HUMANB_HPP
