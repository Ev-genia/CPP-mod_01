/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/10 19:24:51 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	std::string	EnterName;
	int			i;
	Zombie	*Zombics;

	if (av[1])
		EnterName = std::string(&av[1][0]);
	else
		EnterName = "Abrakadabra";
	Zombics = zombieHorde(ac, EnterName);
	i = -1;
	while (++i < ac)
		Zombics[i].announce();
	delete[]Zombics;
	return (0);
}
