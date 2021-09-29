#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{
private :
std::string	type;
public :
	Weapon(std::string type);
std::string const&	getType();
void				setType(std::string type);
};



#endif