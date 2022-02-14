#include <iomanip>
#include <string>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int	main()
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	const WrongAnimal*	w = new WrongCat();

	std::cout << Yellow << "\n--------test Animal---------" << Reset <<std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << Yellow << "\n----- test Wrong Animal-------" << Reset << std::endl;
	std::cout << w->getType() << " " << std::endl;
	w->makeSound();
	std::cout << Yellow << "\n-------- test end --------" << Reset << std::endl;

	delete j;
	delete i;
	delete meta;
	delete w;

	return 0;
}