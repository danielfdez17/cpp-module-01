#pragma once
#ifndef __WEAPON__
#define __WEAPON__

#include "colors.hpp"
#include <string>

class Weapon
{
private:
	std::string	type;

public:
	Weapon(void);
	Weapon(std::string type);
	std::string getType(void);
	void		setType(std::string);

};

#endif // __WEAPON__