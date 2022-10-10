/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:45:09 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/10 19:16:04 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->Name = "";
}

Zombie::Zombie(std::string EnterName)
{
	this->Name = EnterName;
}

void	Zombie::set_name(std::string EnterName)
{
	this->Name = EnterName;
}

Zombie::~Zombie()
{
	std::cout << this->Name << " is died" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}