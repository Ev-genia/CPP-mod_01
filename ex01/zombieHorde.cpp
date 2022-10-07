/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:37:58 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/07 21:56:10 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string Name )
{
	int	i;

	Zombie	*Zombies;
	if (N < 0)
		return (NULL);
	Zombies = new Zombie[N];
	i = 0;
	Name = Name + " ";
	while (i < N)
	{
		Name = Name + "I";
		Zombies[i].set_name(Name);
		i++;
	}
	return (Zombies);
}