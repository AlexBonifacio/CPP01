#include "Weapon.hpp"

Weapon::Weapon(std::string const type) : _type(type) {}

// first const is here to protect _type from modification when getType is called
const std::string& Weapon::getType() const
{
	return _type;
}

void	Weapon::setType(std::string const type)
{
	this->_type = type;
}