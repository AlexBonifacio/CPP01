#include "HumanA.hpp"
#include "HumanB.hpp"
// #include "Weapon.hpp"

// int main()
// {
// 	{
// 		Weapon club = Weapon("crude spiked club");

// 		HumanA bob("Bob", club);
// 		bob.attack();
// 		club.setType("some other type of club");
// 		bob.attack();
// 	}
// 	{
// 		Weapon club = Weapon("crude spiked club");

// 		HumanB jim("Jim");
// 		jim.setWeapon(club);
// 		jim.attack();
// 		club.setType("some other type of club");
// 		jim.attack();
// 	}
// return 0;
// }


int main()
{
	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		HumanA sam("Sam", club);
		bob.attack();
		sam.attack();
		club.setType("some other type of club");
		bob.attack();
		sam.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim");
		HumanB jhon("John");
		jim.setWeapon(club);
		jim.attack();
		jhon.attack();
		club.setType("some other type of club");
		jim.attack();
		jhon.attack();
	}
return 0;
}
