#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		std::string	&getType();
		void		setType(std::string str);

	private:
		std::string	_type;
};

#endif //WEAPON_HPP
