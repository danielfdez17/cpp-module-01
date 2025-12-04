#pragma once
#ifndef __HUMAN_B__
#define __HUMAN_B__

#include "Weapon.hpp"

class HumanB
{
private:
	// * Attributes
	Weapon		*weapon;
	std::string	name;

public:
	// * Constructor
			HumanB(std::string name);

	// * Member functions
	void	setWeapon(Weapon *weapon);
	void	attack(void) const;
};

#endif // __HUMAN_B__