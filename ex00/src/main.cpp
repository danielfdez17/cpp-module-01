#include "Zombie.hpp"

int main(void)
{
	Zombie bartolo("Bartolo");
	bartolo.randomChump("Eustakio");
	Zombie *randomZombie = bartolo.newZombie("Hermenegildo");
	bartolo.announce();
	randomZombie->announce();
	delete randomZombie;
	return 0;
}