#include "Harl.hpp"

///CONSTRUCTORS/////////////////////////////////////////////////////////////////
Harl::Harl()
{
	this->s_binding[DEBUG] = (struct s_binding){DEBUG, "DEBUG", &Harl::_debug};
	this->s_binding[INFO] = (struct s_binding){INFO, "INFO", &Harl::_info};
	this->s_binding[WARNING] = (struct s_binding){WARNING, "WARNING", &Harl::_warning};
	this->s_binding[ERROR] = (struct s_binding){ERROR, "ERROR", &Harl::_error};
}

///DESTRUCTORS//////////////////////////////////////////////////////////////////
Harl::~Harl()
{}

void Harl::complain(std::string level)
{
	int	i = 0;
	while (i < 4)
	{
		if (level == this->s_binding[i].str)
			break ;
		i++;
	}
	switch (i)
	{
		case (0):
			(this->*s_binding[DEBUG].func)();
			__attribute__ ((fallthrough));
		case (1):
			(this->*s_binding[INFO].func)();
			__attribute__ ((fallthrough));
		case (2):
			(this->*s_binding[WARNING].func)();
			__attribute__ ((fallthrough));
		case (3):
			(this->*s_binding[ERROR].func)();
			break ;
		default:
			std::cout << "Hey, buddy... I didn't quite catch what you said to me..." << std::endl;
			break;
	}
}

void	Harl::_debug()
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::_info()
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning()
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::_error()
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
