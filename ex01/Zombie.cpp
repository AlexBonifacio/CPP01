#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name) : _name(name){} 

Zombie::~Zombie(){}

void Zombie::announce(void)
{
	std::cout << _name << ":  BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setZombieName(std::string name)
{
	_name = name;
}