#pragma once
#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <string>
#include "colors.hpp"

class Zombie
{
private:
	std::string	name;

public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);
	Zombie	*zombieHorde(int N, std::string name);
};

#endif // __ZOMBIE_H__