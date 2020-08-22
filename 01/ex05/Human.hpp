#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class	Human
{
	private:
		Brain	brain;
	public:
		Human();
		std::string	identify();
		Brain	&getBrain();
		~Human();
};

#endif