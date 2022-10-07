/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:10:28 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/08 00:04:50 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	std::string	nameB;
	Weapon		*weaponB;
public:
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon &enterWeapon);
	void	attack() const;
};

#endif