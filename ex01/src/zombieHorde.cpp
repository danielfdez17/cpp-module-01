#include "../inc/Zombie.hpp"

Zombie *Zombie::zombieHorde(int N, std::string name) const
{
	Zombie *zombies = new Zombie[N];

	for (int i = 0; i < N; ++i)
		zombies[i].name = name;
	return zombies;
}
