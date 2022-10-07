/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:44:12 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/07 16:04:01 by mlarra           ###   ########.fr       */
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
		Zombie();
		Zombie(std::string enter_name);
		~Zombie();
		void	set_name(std::string name);
		void	announce( void );
};

Zombie	*zombieHorde( int N, std::string name );

#endif