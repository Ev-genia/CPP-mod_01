/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:45:09 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/07 16:24:43 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->name = "";
}

Zombie::Zombie(std::string enter_name)
{
	this->name = enter_name;
}

void	Zombie::set_name(std::string enter_name)
{
	this->name = enter_name;
}

Zombie::~Zombie()
{
	std::cout << this->name << " is died" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}