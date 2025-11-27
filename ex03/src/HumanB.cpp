#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon *weapon)
{
	this->weapon = weapon;
}

void	HumanB::attack(void)
{
	std::cout	<< YELLOW ""
				<< name
				<< " attacks with their "
				<< weapon->getType()
				<< "\n" RESET;
}
