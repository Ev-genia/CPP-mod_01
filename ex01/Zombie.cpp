/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:45:09 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/07 21:55:03 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->name = "";
}

Zombie::Zombie(std::string EnterName)
{
	this->name = EnterName;
}

void	Zombie::set_name(std::string EnterName)
{
	this->name = EnterName;
}

Zombie::~Zombie()
{
	std::cout << this->name << " is died" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}