#include "../inc/Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
	map[0].key = "debug";
	map[0].value = &Harl::debug;
	map[1].key = "info";
	map[1].value = &Harl::info;
	map[2].key = "warning";
	map[2].value = &Harl::warning;
	map[3].key = "error";
	map[3].value = &Harl::error;
}

void	Harl::debug(void)
{
	std::cout	<< CYAN ""
				<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n"
				<< RESET;
}

void	Harl::info(void)
{
	std::cout	<< GREEN ""
				<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"
				<< RESET;
}

void	Harl::warning(void)
{
	std::cout	<< YELLOW ""
				<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n"
				<< RESET;
}

void	Harl::error(void)
{
	std::cout	<< RED ""
				<< "This is unacceptable! I want to speak to the manager now.\n"
				<< RESET;
}

void		Harl::complain(const std::string level) const
{
	for (sui i = 0; i < MAX_OPS; ++i)
		if (level == map[i].key)
			map[i].value();
}
