#include "sed.hpp"

void	substitute(std::ifstream &infile, std::string needle, std::string replace, std::ofstream &outfile)
{
	size_t	found_index = 0;
	std::string haystack;

	while (std::getline(infile, haystack))
	{
		while ((found_index = haystack.find(needle, found_index)) != std::string::npos)
		{
			haystack.erase(found_index, needle.size());
			haystack.insert(found_index, replace);
			found_index += replace.size();
		}
		outfile << haystack;
	}
	outfile << std::endl;
}

int	main(int argc, char *argv[])
{
	std::string		filename;
	std::ifstream	infile;
	std::ofstream	outfile;

	if (argc != 4)
		return (EXIT_FAILURE);

	filename = argv[1];
	filename.append(".replace");
	infile.open(argv[1], std::ifstream::in);
	outfile.open(filename.c_str(), std::ofstream::in & std::ofstream::out & std::ofstream::trunc);
	std::string needle = argv[2];
	std::string replace = argv[3];

	substitute(infile, needle, replace, outfile);
	infile.close();
	outfile.close();
	return (0);
}
