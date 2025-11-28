#pragma once
#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

#include <string>

class Zombie
{
private:
	std::string	name;

public:
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);
	Zombie	*newZombie(std::string name);
	void	randomChump(std::string name);
};

#endif // __ZOMBIE_H__