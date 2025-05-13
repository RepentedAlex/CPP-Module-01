#include "Harl.hpp"

int	main()
{
	Harl		harl;
	std::string	s1 = "DEBUG";
	std::string	s2 = "INFO";
	std::string	s3 = "WARNING";
	std::string	s4 = "ERROR";
	std::string	s5 = "BANANE";
	std::string	s6 = "0";
	std::string	s7 = "";

	harl.complain(s1);
	harl.complain(s2);
	harl.complain(s3);
	harl.complain(s4);
	std::cout << "Tests (shouldn't display anything below, except destructor call):" << std::endl;
	harl.complain(s5);
	harl.complain(s6);
	harl.complain(s7);
}
