/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpark <hpark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 12:19:57 by hpark             #+#    #+#             */
/*   Updated: 2020/08/24 12:19:57 by hpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	std::string	names[10] = {"zom1", "zom2", "zom3", "zom4", "zom5" \
	, "zom6", "zom7", "zom8", "zom9", "zom10"};

	this->N = N;
	this->zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
		this->zombies[i].setNameAndType(names[rand() % 10], "random");
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "Release Zombies" << std::endl;
	delete []this->zombies;
	std::cout << "ZombieHorde destroyed" << std::endl;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < this->N; i++)
		this->zombies[i].announce();
}