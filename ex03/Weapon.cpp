/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:09:35 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/08 00:02:31 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	this->type = "";
}

Weapon::Weapon(const std::string &enterType)
{
	this->type = enterType;
}

Weapon::~Weapon()
{
}

std::string	const &Weapon::getType(void) 
{
	return (this->type);
}

void	Weapon::setType(const std::string &enterType)
{
	this->type = enterType;
}
