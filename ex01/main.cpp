/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/07 16:31:11 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	std::string	enter_name;
	int			i;
	Zombie	*zombics;

	enter_name = std::string(&av[2][0]);
	zombics = zombieHorde(ac, enter_name);
	i = -1;
	while (++i < ac)
		zombics[i].announce();
	delete[]zombics;
	return (0);
}
