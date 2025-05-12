#include "sed.hpp"
#include <string>

void	substitute(std::ifstream &infile, std::string needle, std::string replace, std::ofstream &outfile)
{
	for (std::string haystack ; \
		std::getline(infile, haystack) ; \
		outfile << haystack << std::endl)
		for (size_t found_index = 0 ; \
			(found_index = haystack.find(needle, found_index)) != std::string::npos ; \
			found_index = 0)
		{
			haystack.erase(found_index, needle.size());
			haystack.insert(found_index, replace);
			found_index += replace.size();
		}
}

int	main(int argc, char *argv[])
{
	std::string		filename;
	std::ifstream	infile;
	std::ofstream	outfile;

	if (argc != 4)
	{
		std::cout << "usage: ./sed [FILE] [MATCH] [REPLACE]" << std::endl;
		return (EXIT_FAILURE);
	}

	filename = argv[1];
	filename.append(".replace");
	infile.open(argv[1], std::ifstream::in);
	if (!infile.is_open())
	{
		std::cout << "error: couldn't open " << argv[1] << std::endl;
		return (EXIT_FAILURE);
	}
	outfile.open(filename.c_str(), std::ofstream::in & std::ofstream::out & std::ofstream::trunc);
	if (!outfile.is_open())
	{
		std::cout << "error: couldn't open " << filename << std::endl;
		return (EXIT_FAILURE);
	}
	std::string needle = argv[2];
	std::string replace = argv[3];

	substitute(infile, needle, replace, outfile);
	infile.close();
	outfile.close();
	return (EXIT_SUCCESS);
}
