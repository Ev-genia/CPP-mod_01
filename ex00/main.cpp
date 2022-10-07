/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/07 21:51:11 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	std::string	EnterName;
	Zombie	*Zombic;

	EnterName = std::string(&av[1][0]);
	randomChump(EnterName);

	EnterName = std::string(&av[2][0]);
	Zombic = newZombie(EnterName);
	Zombic->announce();
	delete(Zombic);
}
