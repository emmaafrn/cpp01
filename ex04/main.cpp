#include <iostream>
#include <string.h>
#include <fstream>

std::string	from_s1_to_s2(std::string line, char *s1, char *s2, size_t i)
{
	int	length = line.length();
	int	start = i;

	// std::cout << "s1 : " << s1 << std::endl;
	i = line.find(s1, i);
	while (i != std::string::npos){
		line.erase(start, i);
		line.insert(start, s2);
		i = line.find(s1, i);
	}
	return (line);
}

int	main(int argc, char **argv)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		line;
	size_t			i = 0;

	if (argc != 4)
		return (0);
	infile.open(argv[1]);
	outfile.open(strcat(argv[1], ".replace"));
	if (infile.fail() || outfile.fail()){
		std::cout << "Error opening file" << std::endl;
		exit(1);
	}
	while (!infile.eof()){
		infile >> line;
		line = from_s1_to_s2(line, argv[3], argv[4], i);
		outfile << line;
	}
	return (0);
}
