#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	Name = name;
	weapon = NULL;
}

void	HumanB::attack(){
	if (weapon != NULL)
		std::cout << Name << " attacks with his " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &NewWeapon){
	weapon = &NewWeapon;
}

