#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

class WrongCat
{
    private:
        /* data */
    public:
        WrongCat(/* args*/);
        WrongCat(const WrongCat &ref);
        ~WrongCat();
        WrongCat& operator=(const WrongCat &ref);
};

#endif