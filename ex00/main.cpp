#include "Zombie.hpp"

int	main(void){

	Zombie	Zzzombie;
	Zombie	*Zombie;

	Zombie = Zzzombie.newZombie("Patrick");
	Zombie->announce();
	Zzzombie.randomChump("Philibert");
	delete Zombie ;
	return (0);
}