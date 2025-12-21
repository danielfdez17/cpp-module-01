#include "../inc/Zombie.hpp"

int main(void)
{
	Zombie zzombie("zzombie");
	zzombie.randomChump("random zombie");
	Zombie *randomZombie = zzombie.newZombie("new zombie");
	zzombie.announce();
	randomZombie->announce();
	delete randomZombie;
	return 0;
}