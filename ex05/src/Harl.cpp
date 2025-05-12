#include "Harl.hpp"

///CONSTRUCTORS/////////////////////////////////////////////////////////////////
Harl::Harl()
{
	PRINT_42;
	this->s_binding[DEBUG] = (struct s_binding){DEBUG, "DEBUG", &Harl::_debug};
	this->s_binding[INFO] = (struct s_binding){INFO, "INFO", &Harl::_info};
	this->s_binding[WARNING] = (struct s_binding){WARNING, "WARNING", &Harl::_warning};
	this->s_binding[ERROR] = (struct s_binding){ERROR, "ERROR", &Harl::_error};
}

///DESTRUCTORS//////////////////////////////////////////////////////////////////
Harl::~Harl()
{
	PRINT_42;
}

///MEMBER FUNCTIONS/////////////////////////////////////////////////////////////
void Harl::complain(std::string level)
{
	for (int i = 0 ; i < 4 ; i++) {
		if (level == this->s_binding[i].str)
			(this->*s_binding[i].func)();
	}
}

void	Harl::_debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::_info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::_error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
