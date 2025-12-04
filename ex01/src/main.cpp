#include "../inc/Zombie.hpp"

int main(void)
{
	int N = 10;
	Zombie bartolo("Bartolo");
	bartolo.announce();
	Zombie *zombies = bartolo.zombieHorde(N, "newbie");

	for (int i = 0; i < N; ++i)
		zombies[i].announce();
	delete[] zombies;
	return 0;
}