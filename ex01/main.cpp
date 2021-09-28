#include "Zombie.hpp"

int	main(void){
	Zombie	*Horde;
	int		HordeSize = 5;
	int		i = 0;

	Horde = Horde->zombieHorde(HordeSize, "Joe");
	while (i < HordeSize){
		Horde[i].announce();
		i++;
	}
	delete [] Horde;
	return (0);
}