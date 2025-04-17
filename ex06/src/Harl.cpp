#include "Harl.hpp"

Harl::Harl()
{
	this->s_ft_array[DEBUG] = (struct s_ft_array){DEBUG, "DEBUG", &Harl::_debug};
	this->s_ft_array[INFO] = (struct s_ft_array){INFO, "INFO", &Harl::_info};
	this->s_ft_array[WARNING] = (struct s_ft_array){WARNING, "WARNING", &Harl::_warning};
	this->s_ft_array[ERROR] = (struct s_ft_array){ERROR, "ERROR", &Harl::_error};
}

Harl::~Harl()
{}

void Harl::complain(std::string level)
{
	int	i = 0;
	while (i < 4)
	{
		if (level == this->s_ft_array[i].str)
			break ;
		i++;
	}
	switch (i)
	{
		case (0):
			(this->*s_ft_array[DEBUG].func)();
			__attribute__ ((fallthrough));
		case (1):
			(this->*s_ft_array[INFO].func)();
			__attribute__ ((fallthrough));
		case (2):
			(this->*s_ft_array[WARNING].func)();
			__attribute__ ((fallthrough));
		case (3):
			(this->*s_ft_array[ERROR].func)();
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
