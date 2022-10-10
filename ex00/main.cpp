/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/10 19:11:23 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	std::string	EnterNameFirst;
	std::string	EnterNameSecond;
	Zombie	*Zombic;
	if (av[1] && av[2])
	{
		EnterNameFirst = std::string(&av[1][0]);
		EnterNameSecond = std::string(&av[2][0]);
	}
	else
	{
		EnterNameFirst = "King kong";
		EnterNameSecond = "Arangutan";
	}
	randomChump(EnterNameFirst);
	Zombic = newZombie(EnterNameSecond);
	Zombic->announce();
	delete(Zombic);
}
