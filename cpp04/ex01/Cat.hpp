#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*c_brain;
    public:
        Cat();
        Cat(const Cat &ref);
        ~Cat();
        Cat& operator=(const Cat &ref);
		virtual void makeSound() const;
		void	printIdeas(void) const;
};

#endif