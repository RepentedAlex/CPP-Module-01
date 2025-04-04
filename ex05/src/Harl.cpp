#include "Harl.hpp"

Harl::Harl()
{
	this->s_ft_array[DEBUG] = (struct s_ft_array){DEBUG, "DEBUG", &Harl::debug};
	this->s_ft_array[INFO] = (struct s_ft_array){INFO, "INFO", &Harl::info};
	this->s_ft_array[WARNING] = (struct s_ft_array){WARNING, "WARNING", &Harl::warning};
	this->s_ft_array[ERROR] = (struct s_ft_array){ERROR, "ERROR", &Harl::error};
}

Harl::~Harl()
{}

void Harl::complain(std::string level)
{
	for (int i = 0 ; i < 4 ; i++) {
		if (level.compare(this->s_ft_array[i].str) == 0)
			(this->*s_ft_array[i].func)();
	}
}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
