/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/07 21:54:31 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	std::string	EnterName;
	int			i;
	Zombie	*Zombics;

	EnterName = std::string(&av[2][0]);
	Zombics = zombieHorde(ac, EnterName);
	i = -1;
	while (++i < ac)
		Zombics[i].announce();
	delete[]Zombics;
	return (0);
}
