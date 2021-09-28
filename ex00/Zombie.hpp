#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <new>

class	Zombie{
private:
std::string Name;
public :
	Zombie();
void	announce(void);
Zombie*	newZombie( std::string name );
void	randomChump( std::string name );
	~Zombie();
};

#endif