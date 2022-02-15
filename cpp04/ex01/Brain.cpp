#include "Brain.hpp"

Brain::Brain()
{
	std::cout << Green << "Brain default constructor called" << Reset <<std::endl;
	std::string		random = "abcdefghijklmnopqrstuvwxyz";
	
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = random[rand() % sizeof(random)];
	}
}

Brain::Brain(const Brain &ref)
{
	std::cout << Green << "Brain Copy constructor called" << Reset <<std::endl;
	*this = ref;
}

Brain& Brain::operator=(const Brain &ref)
{
	if (this != &ref)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = ref.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << Red << "Brain destructor called" << Reset << std::endl;
}

void	Brain::printFirstIdeas(void) const
{
	std::cout << Blue << "[Ideas] " << Reset << ideas[0] << "," << ideas[1] << "," << ideas[2] << "," << ideas[3] << "," << ideas[4] << ",... ";
}

void	Brain::setIdeas()
{
	std::string		random[] = {"cow cow", "KKKK KKKK", "Hi Hi", "Hello Hello", "Bang Bang"};
	
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = random[i % 5];
	}
}