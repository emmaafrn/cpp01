#include "Karen.hpp"

Karen::Karen(){
	levelsTab[0] = "DEBUG";
	levelsTab[1] = "INFO";
	levelsTab[2] = "WARNING";
	levelsTab[3] = "ERROR";
	funcTab[0] = &Karen::debug;
	funcTab[1] = &Karen::info;
	funcTab[2] = &Karen::warning;
	funcTab[3] = &Karen::error;
}

Karen::~Karen(){

}

void	Karen::debug(void){
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void){
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void){
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level){
	int	i = -1;
	int	res = -1;

	while (res != 0 && ++i < 4)
		res = level.compare(levelsTab[i]);
	if (i < 4)
		(this->*funcTab[i])();
}