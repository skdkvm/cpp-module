#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*d_brain;
    public:
        Dog();
        Dog(const Dog &ref);
        ~Dog();
        Dog& operator=(const Dog &ref);
		virtual void makeSound() const;
		void	printIdeas(void) const;
};

#endif