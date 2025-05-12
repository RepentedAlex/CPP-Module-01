#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>

#include "Weapon.hpp"

class HumanB
{
	public:
		// Constructors
			HumanB();
			HumanB(std::string name);
		// Destructors
			~HumanB();
		// Getters
			std::string const	&getName() const;
			Weapon				*getWeapon() const;
		// Setters
			void				setName(std::string name);
			void				setWeapon(Weapon &weapon);
		// Member functions
			void				attack() const;

	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif //HUMANB_HPP
