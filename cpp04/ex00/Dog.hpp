#ifndef DOG_HPP
# define DOG_HPP

class Dog
{
    private:
        /* data */
    public:
        Dog(/* args*/);
        Dog(const Dog &ref);
        ~Dog();
        Dog& operator=(const Dog &ref);
};

#endif