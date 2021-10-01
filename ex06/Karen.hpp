#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>
#include <iostream>


class Karen{
private :
typedef void (Karen::* funcPtr)(void);
funcPtr 	funcTab[4];
std::string	levelsTab[4];
void	debug( void );
void	info( void );
void	warning( void );
void	error( void );
public :
	Karen();
	~Karen();
void	complain(std::string level);
int		get_level(std::string level);
};

#endif