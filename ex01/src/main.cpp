#include "../inc/Zombie.hpp"

int main(void)
{
	int N = 10;
	Zombie zzombie("Mike Wazombie");
	zzombie.announce();
	Zombie *zombies = zzombie.zombieHorde(N, "newbie");

	for (int i = 0; i < N; ++i)
		zombies[i].announce();
	delete[] zombies;
	return 0;
}