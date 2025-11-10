#include "Zombie.hpp"

int main(void)
{
	std::cout << "Alex is the heap zombie\n";
	Zombie *Alex = newZombie("Alex");
	Alex->announce();
	
	std::cout << "Eriana is the stack Zombie\n";
	randomChump("Eriana");
	std::cout << "The stack zombie is destroyed automaticly at the end of the scope\n";

	delete(Alex);
	std::cout << "The heap zombie has to be delete manually or it will not call the destructor and leak\n";
	return 0;
}