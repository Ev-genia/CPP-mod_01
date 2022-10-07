/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:46:31 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/07 14:19:18 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie( std::string name_zombie )
{
	Zombie	*zombic;

	zombic = new Zombie(name_zombie);
	return (zombic);
}