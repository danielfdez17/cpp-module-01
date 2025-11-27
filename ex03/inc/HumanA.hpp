#pragma once
#ifndef __HUMAN_A__
#define __HUMAN_A__

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon 		*weapon;
	std::string name;

public:
	HumanA(std::string name, Weapon *weapon);
	void	attack(void);
};

#endif // __HUMAN_A__