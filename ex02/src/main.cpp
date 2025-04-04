#include <iostream>
#include <ostream>
#include <string>


int	main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string		&stringREF = str;

	std::cout << "str's address:              " << &str << std::endl;
	std::cout << "address held by stringPTR:  " << stringPTR << std::endl;
	std::cout << "address held by stringREF:  " << &stringREF << std::endl;

	std::cout << "str's value:                " << str << std::endl;
	std::cout << "value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "value pointed by stringREF: " << stringREF << std::endl;
}
