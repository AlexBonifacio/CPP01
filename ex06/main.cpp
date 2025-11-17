#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage is: ./Harl <DEBUG> or <INFO> or <WARNING> or <ERROR>\n";
		return (1);
	}
	Harl harl;
	harl.complain(av[1]);
	return 0;
}