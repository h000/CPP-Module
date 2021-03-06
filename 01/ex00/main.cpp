/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpark <hpark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 12:20:20 by hpark             #+#    #+#             */
/*   Updated: 2020/08/24 12:20:20 by hpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony	*pony;

	pony = new Pony("Pony1", "brown");
	std::cout << "Pony's name is " << pony->getName() << std::endl;
	std::cout << "Pony's color is " << pony->getColor() << std::endl;
	pony->eat();
	pony->run();
	pony->sleep();
	delete(pony);
}

void	ponyOnTheStack()
{
	Pony	pony("Pony2", "grey");

	std::cout << "Pony's name is " << pony.getName() << std::endl;
	std::cout << "Pony's color is " << pony.getColor() << std::endl;
	pony.eat();
	pony.run();
	pony.sleep();
}

int main()
{
	std::cout << "====Pony On the Heap====" << std::endl;
	ponyOnTheHeap();
	std::cout << "====Pony On the Stack===" << std::endl;
	ponyOnTheStack();
	return (0);
}











