#include "HumanB.hpp"
#include "Weapon.hpp"

#include <iostream>

HumanB::HumanB(std::string const name)
	: _name(name), _weapon(NULL)
{}

void	HumanB::attack(void)
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << "\n";
	else
		std::cout << _name << " has no weapon" << "\n";
}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}
