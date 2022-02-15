#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

# define Black            "\e[30m"
# define Blue             "\e[34m"
# define Green            "\e[32m"
# define Cyan             "\e[36m"
# define Red              "\e[31m"
# define Purple           "\e[35m"
# define Gray             "\e[37m"
# define Yellow           "\e[33m"
# define White            "\e[37m"
# define Reset            "\e[0m"

class Animal
{
    protected:
        std::string	type;
    public:
        Animal();
        Animal(const Animal &ref);
        virtual ~Animal();
	
        Animal& operator=(const Animal &ref);
	
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif