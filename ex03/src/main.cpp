#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", &club);
		bob.attack();
		club.setType("paraguas");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(&club);
		jim.attack();
		club.setType("paraguas");
		jim.attack();
	}
	return 0;
}