#include "Karen.hpp"

int	get_the_level(std::string level){
	Karen Karen;

	return (Karen.get_level(level));
}



int	main(int argc, char **argv){
	Karen	Karen;
	int		level;
	if (argc != 2)
	{
		std::cout << "Error, wrong parameters" << std::endl;
		return (0);
	}
	level = get_the_level(argv[1]);
	switch (level){
		case 0 : std::cout << "[DEBUG]" << std::endl;
				 Karen.complain("DEBUG");
		case 1 : std::cout << "[INFO]" << std::endl;
				 Karen.complain("INFO");
		case 2 : std::cout << "[WARNING]" << std::endl;
				 Karen.complain("WARNING");
		case 3 : std::cout << "[ERROR]" << std::endl;
				 Karen.complain("ERROR");
				 break ;
		default : std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}