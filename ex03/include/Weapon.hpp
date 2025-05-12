#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

#define PRINT_42 \
do \
{ \
	std::cout << __PRETTY_FUNCTION__ << "\t called" << std::endl; \
} \
while (0)

class Weapon
{
	public:
		// Constructors
			Weapon();
			Weapon(std::string type);
		// Destructors
			~Weapon();
		// Getters
			std::string	const	&getType() const;
		// Setters
			void	setType(std::string str);

	private:
		std::string	_type;
};

#endif //WEAPON_HPP
