#include "Zombie.hpp"

Zombie::Zombie(){

}

void	Zombie::announce(void){
	std::cout << "<" << Name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){
	std::cout << '<' << Name << "> has been killed" << std::endl;
}
