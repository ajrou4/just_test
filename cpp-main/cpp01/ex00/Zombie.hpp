#ifndef Zombie_CLASS_HPP
#define Zombie_CLASS_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std:: string name;
public:
	Zombie(std:: string name);
	~Zombie(void);
	void announce( void );
};

#endif
