/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:09:48 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/08 00:02:24 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
private:
	std::string	type;
public:
	Weapon();
	Weapon(const std::string &type);
	~Weapon();
	std::string	const &getType(void);
	void		setType(const std::string &type);
};


#endif