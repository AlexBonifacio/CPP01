#include "HumanB.hpp"
#include "Weapon.hpp"

#include <iostream>

HumanB::HumanB(std::string& name)
	: _name(name)
{
	_weapon = new Weapon;
}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << "\n";
}