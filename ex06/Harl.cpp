/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:34:44 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/10 17:03:53 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You did not put enough bacon in my burger! If you did, I would not be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I have been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int	Harl::getIndex(std::string level)
{
	std::string	levelIndex[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	i = 0;
	while (i < 4)
	{
		if (level == levelIndex[i])
			return (i);
		i++;
	}
	return (i);
}

Harl:: Harl()
{
}

Harl::~ Harl()
{
}

void	Harl::complain(std::string level)
{
	void	(Harl::*arrFunk[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int		levelIndex;

	levelIndex = this->getIndex(level);
	switch (levelIndex)
	{
		case (0):
		{
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*arrFunk[0])();
		}
		case (1):
		{
			std::cout << "[ INFO ]" << std::endl;
			(this->*arrFunk[1])();
		}
		case (2):
		{
			std::cout << "[ WARNING ]" << std::endl;
			(this->*arrFunk[2])();
		}
		case (3):
		{
			std::cout << "[ ERROR ]" << std::endl;
			(this->*arrFunk[3])();
			break;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
