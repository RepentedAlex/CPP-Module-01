#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>

#include "Weapon.hpp"

class HumanA
{
	public:
//		HumanA();
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack() const;

		std::string	getName() const { return this->_name; }
		Weapon	*getWeapon() const { return this->_weapon; }
	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif //HUMANA_HPP
