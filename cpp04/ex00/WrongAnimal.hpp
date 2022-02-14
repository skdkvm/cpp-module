#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &ref);
        ~WrongAnimal();
        WrongAnimal& operator=(const WrongAnimal &ref);
		void	makeSound() const;
		std::string getType() const;
};

#endif