/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:10:02 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/07 22:57:22 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	std::string	nameA;
	Weapon		&weaponA;
public:
	HumanA(std::string name, Weapon &weaponA);
	~HumanA();
	void	attack();
};

#endif