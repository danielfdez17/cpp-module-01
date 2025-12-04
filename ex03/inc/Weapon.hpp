#pragma once
#ifndef __WEAPON__
#define __WEAPON__

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

#include <string>

class Weapon
{
private:
	// * Attributes
	std::string	type;

public:
	// * Constructor
				Weapon(void);
				Weapon(std::string type);

	// * Member functions
	std::string	getType(void) const;
	void		setType(const std::string type);
};

#endif // __WEAPON__