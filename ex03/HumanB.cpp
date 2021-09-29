#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	Name = name;
}

void	HumanB::attack(){
	std::cout << Name << " attacks with his " << weapon->getType() << std::endl;
}
