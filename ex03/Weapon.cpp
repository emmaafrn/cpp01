#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	Type = type;
}

std::string const&	Weapon::getType(){
	return (Type);
}

void	Weapon::setType(std::string newType){
	Type = newType;
}
