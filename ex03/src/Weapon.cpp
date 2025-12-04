#include "Weapon.hpp"

Weapon::Weapon(void)
{
	type = "";
}


Weapon::Weapon(std::string type)
{
	this->type = type;
}

std::string Weapon::getType(void) const
{
	return type;
}

void		Weapon::setType(const std::string type)
{
	this->type = type;
}
