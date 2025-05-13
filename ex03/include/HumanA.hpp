#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>

#include "Weapon.hpp"

class HumanA
{
	public:
		// Constructors
			HumanA(std::string name, Weapon &weapon);
		// Destructors
			~HumanA();
		// Getters
			std::string const	&getName() const;
			Weapon const		*getWeapon() const;
		// Setters
			void				setName(std::string name);
			void				setWeapon(Weapon &weapon);
		// Member functions
			void				attack() const;

	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif //HUMANA_HPP
