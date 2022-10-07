/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/07 14:52:40 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	std::string	enter_name;
	Zombie	*zombic;

	enter_name = std::string(&av[1][0]);
	randomChump(enter_name);

	enter_name = std::string(&av[2][0]);
	zombic = newZombie(enter_name);
	zombic->announce();
	delete(zombic);
}
