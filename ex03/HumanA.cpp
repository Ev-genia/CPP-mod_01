/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:10:14 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/07 23:20:37 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &enterWeaponA) : nameA(name), weaponA(enterWeaponA)
{
	// this->nameA = name;
	// this->weaponA = enterWeaponA;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->nameA << " attacks with their " << this->weaponA.getType() << std::endl;
}
