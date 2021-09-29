#include <iostream>
#include <ctype.h>
#include <string>

int	main(void){

	std::string		string = "HI THIS IS BRAIN";
	std::string		*stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "&string = " << &string << std::endl;
	std::cout << "stringPTR = " << stringPTR << std::endl;
	std::cout << "&stringREF = " << &stringREF << std::endl;

	std::cout << "string = " << string << std::endl;
	std::cout << "*stringPTR = " << *stringPTR << std::endl;
	std::cout << "stringREF = " << stringREF << std::endl;
	return (0);
}
