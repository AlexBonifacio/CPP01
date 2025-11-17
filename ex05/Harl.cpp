#include "Harl.hpp"
#include <iostream>


void	Harl::complain( std::string level)
{
	void	(Harl::*methods[4])(void) = {
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*methods[i])();
			return ;
		}
	}
	std::cout << "Usage is: ./Harl <DEBUG> or <INFO> or <WARNING> or <ERROR>\n";
}

void	Harl::debug( void )
{
	std::cout << "Debug:\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	Harl::info()
{
	std::cout << "Info:\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning()
{
	std::cout << "Warning:\nI think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void	Harl::error()
{
	std::cout << "Error:\nThis is unacceptable! I want to speak to the manager now.\n";
}