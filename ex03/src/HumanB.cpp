#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

void	HumanB::setWeapon(Weapon *weapon)
{
	this->weapon = weapon;
}

void	HumanB::attack(void) const
{
	if (!weapon)
	{
		std::cout	<< YELLOW ""
			<< name
			<< " attacks with their bare hands"
			<< "\n" RESET;
		return;
	}
	std::cout	<< YELLOW ""
				<< name
				<< " attacks with their "
				<< weapon->getType()
				<< "\n" RESET;
}
