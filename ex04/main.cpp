#include <iostream>
#include <string.h>
#include <fstream>

std::string	from_s1_to_s2(std::string line, std::string s1, std::string s2, size_t i)
{
	int	s1_length = s1.length();
	int	start = i;

	i = line.find(s1, i);
	while (i != std::string::npos){
		line.erase(i, s1_length);
		line.insert(i, s2);
		i = line.find(s1, i);
	}
	return (line);
}

int	main(int argc, char **argv)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		line;
	std::string		temp;
	size_t			i = 0;

	if (argc != 4){
		std::cout << "Error, wrong parameters" << std::endl;
		return (0);
	}
	infile.open(argv[1]);
	if (infile.fail()){
		std::cout << "Error opening file" << std::endl;
		exit(1);
	}
	temp.append(argv[1]).append(".replace");
	outfile.open(temp);
	if (outfile.fail()){
		std::cout << "Error opening file" << std::endl;
		exit(1);
	}
	while (!infile.eof()){
		getline(infile, line);
		line = from_s1_to_s2(line, argv[2], argv[3], i);
		outfile << line;
		if (!infile.eof())
			outfile << std::endl;
	}
	return (0);
}
