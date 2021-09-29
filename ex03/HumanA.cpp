#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : Name(name), weapon(type){
}

void	HumanA::attack(){
	std::cout << Name << " attacks with his " << weapon.getType() << std::endl;
}
