#include "../inc/Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << GREEN ""
			  << this->name << ": created...\n" RESET;
}

Zombie::~Zombie(void)
{
	std::cout << RED ""
			  << name << ": destroyed...\n" RESET;
}

void Zombie::announce(void)
{
	std::cout << CYAN ""
			  << name << ": BraiiiiiiinnnzzzZ...\n" RESET;
}
