#include "Zombie.hpp"

int main(void)
{
	int count = 7;
	Zombie *horde = zombieHorde(count, "Jhonny");

	if (!horde)
		return 1;

	for (int i = 0; i < count; i++)
	{
		horde[i].announce();
	}
	
	delete [] horde;
	return 0;
}