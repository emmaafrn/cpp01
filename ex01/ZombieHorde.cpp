#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde(int N, std::string name){
	int	i = 0;
	Zombie *Zombies = new Zombie [N] ;

	while (i < N){
		Zombies[i].Name = name;
		i++;
	}
	return (Zombies);
}