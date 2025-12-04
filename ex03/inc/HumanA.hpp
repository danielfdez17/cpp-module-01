#pragma once
#ifndef __HUMAN_A__
#define __HUMAN_A__

#include "Weapon.hpp"

class HumanA
{
private:
	// * Attributes
	Weapon		*weapon;
	std::string	name;

public:
	// * Constructor
			HumanA(std::string name, Weapon *weapon);

	// * Member functions
	void	attack(void) const;
};

#endif // __HUMAN_A__