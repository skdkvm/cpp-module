#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

class WrongAnimal
{
    private:
        /* data */
    public:
        WrongAnimal(/* args*/);
        WrongAnimal(const WrongAnimal &ref);
        ~WrongAnimal();
        WrongAnimal& operator=(const WrongAnimal &ref);
};

#endif