/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpark <hpark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 12:50:49 by hpark             #+#    #+#             */
/*   Updated: 2020/09/04 12:51:56 by hpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){}

Ice::Ice(Ice const &other) : AMateria("ice")
{
	*this = other;
}

Ice::~Ice(){}

Ice	&Ice::operator=(Ice const &other)
{
	this->_type = other._type;
	this->_xp = other._xp;
	return (*this);
}

Ice* Ice::clone() const
{
	Ice *copy = new Ice(*this);
	return (copy);
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout <<  "* shoots an ice bolt at NAME *" << std::endl;
}