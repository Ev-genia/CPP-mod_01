/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:44:12 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/07 21:55:24 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string.h>

class Zombie
{
	private:
		std::string	Name;
	public:
		Zombie();
		Zombie(std::string EnterName);
		~Zombie();
		void	set_name(std::string Name);
		void	announce( void );
};

Zombie	*zombieHorde( int N, std::string Name );

#endif