#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "Rad Scorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &other): Enemy(other)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion	&RadScorpion::operator=(const RadScorpion &other)
{
	this->type = other.type;
	this->hp = other.hp;
	return (*this);
}