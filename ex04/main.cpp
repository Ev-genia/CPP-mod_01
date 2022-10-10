/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/10 12:51:54 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	ftCheckS(std::string &s1, std::string &s2)
{
	if (s1.empty() || s2.empty())
	{
		std::cout << "s1 or s2 is empty" << std::endl;
		return (1);
	}
	return (0);
}

int	ftCheckFileIn(std::ifstream &fileIn)
{
	// fileIn.open("f1", std::ios_base::in);
	if (!fileIn)
	{
		std::cout << "Error open file" << std::endl;
		return (1);
	}
	return (0);
}

int	ftCheckFileOut(std::ofstream &fileOut)
{
	if (!fileOut)
	{
		std::cout << "Error open file" << std::endl;
		return (1);
	}
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string		fileName;
		std::string		s1;
		std::string		s2;
		std::ifstream	fileIn;
		std::ofstream	fileOut;
		std::string		buff;
		size_t			poz;
		

		fileName = av[1];
		s1 = av[2];
		s2 = av[3];
		if (ftCheckS(s1, s2) != 0)
			return (1);
		fileIn.open(av[1]);
		if (ftCheckFileIn(fileIn) != 0)
			return (1);
		fileOut.open(av[1] + (const std::string)".replace");
		if (ftCheckFileOut(fileOut) != 0)
		{
			fileIn.close();
			return (1);
		}
		while (getline(fileIn, buff))
		{
			while (1)
			{
				poz = buff.find(s1);
				if (poz == std::string::npos)
					break;
				buff.erase(poz, s1.length());
				buff.insert(poz, s2);
			}
			fileOut << buff << std::endl;
		}
	}
	else
	{
		std::cout << "Wrong count arguments" << std::endl;
		return (1);
	}
	return 0;
}
