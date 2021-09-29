#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
private :
std::string	Name;
Weapon		*weapon;
public :
	HumanB(std::string name);
void	setWeapon(Weapon weapon);
void	attack();
};


#endif