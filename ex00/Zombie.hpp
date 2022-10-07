/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:44:12 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/07 14:09:17 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string.h>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string enter_name);
		~Zombie();
		void announce( void );
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif