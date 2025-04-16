#include "Harl.hpp"

int	main()
{
	Harl		harl;
	std::string	s1 = "DEBUG";
	std::string	s2 = "INFO";
	std::string	s3 = "WARNING";
	std::string	s4 = "ERROR";

	harl.complain(s1);
	harl.complain(s2);
	harl.complain(s3);
	harl.complain(s4);
}
