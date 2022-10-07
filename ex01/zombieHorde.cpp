/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:37:58 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/07 16:25:41 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	int	i;

	Zombie	*zombies;
	if (N < 0)
		return (NULL);
	zombies = new Zombie[N];
	i = 0;
	name = name + " ";
	while (i < N)
	{
		name = name + "I";
		zombies[i].set_name(name);
		i++;
	}
	return (zombies);
}