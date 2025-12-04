#include "../inc/Zombie.hpp"

void	Zombie::randomChump(std::string name) const
{
	Zombie zombie = Zombie(name);
	zombie.announce();
}
