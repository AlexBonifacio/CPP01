#include "Zombie.hpp"
#include <sstream> //ostringstream

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return NULL;
	
	Zombie* zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		std::ostringstream oss;
		oss << name << (i + 1);

		zombies[i].setZombieName(oss.str());
	}

	return zombies;
}
