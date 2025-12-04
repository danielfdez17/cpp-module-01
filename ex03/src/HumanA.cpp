#include "HumanA.hpp"

#include <iostream>

HumanA::HumanA(std::string name, Weapon *weapon)
{
	this->name = name;
	this->weapon = weapon;
}

void	HumanA::attack(void) const
{
	std::cout	<< GREEN ""
				<< name
				<< " attacks with their "
				<< weapon->getType()
				<< "\n" RESET;
}
