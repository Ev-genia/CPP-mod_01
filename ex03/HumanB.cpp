/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:10:38 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/08 00:10:17 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->nameB = name;
	this->weaponB = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &enterWeapon)
{
	this->weaponB = &enterWeapon;
}

void	HumanB::attack() const
{
	if (weaponB)
		std::cout << this->nameB << " attacks with their " << this->weaponB->getType() << std::endl;
	else
		std::cout << this->nameB << " attacks without weapon" << std::endl;
}
