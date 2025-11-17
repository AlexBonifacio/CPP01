#include "Harl.hpp"
#include <iostream>


void	Harl::complain( std::string level)
{
	void	(Harl::*methods[4])(void) = {
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i;
	for (i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			break ;
		}
	}

	switch (i)
	{
		case 0:
			(this->*methods[0])(); // fall through
		case 1:
			(this->*methods[1])(); // fall through
		case 2:
			(this->*methods[2])(); // fall through
		case 3:
			(this->*methods[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}

void	Harl::debug( void )
{
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	Harl::info()
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning()
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void	Harl::error()
{
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now.\n";
}