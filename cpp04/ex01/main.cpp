#include <iomanip>
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"


/*int	main()
{
	Animal *A[4];
	for (int i = 0; i < 4; i++) {
		if (i % 2 == 0) {
			A[i] = new Dog();	
		}
		else {
			A[i] = new Cat();
		}
	}

	std::cout << Yellow << "--------test 1 start----------" << Reset << std::endl;
	
	for (int i = 0; i < 4; i++) {
		std::cout << A[i]->getType() << " : ";
		A[i]->makeSound();
	}
	
	for (int i = 0; i < 4; i++) {
		delete A[i];
	}
	std::cout << Yellow << "--------test 1 end----------" << Reset << std::endl;

	Dog test;
	Dog	temp = test;

	std::cout << "test : ";
	test.printIdeas();
	std::cout << "temp : ";
	temp.printIdeas();

	std::cout << "test : ";
	test.printIdeas();
	std::cout << "temp : ";
	temp.printIdeas();
	std::cout << "\ntesting end" << std::endl;
	
	system("leaks Deep");
	return 0;
}*/
#include <cstdlib>
#define SIZE_ARRAY 10

int	main(void)
{
	Animal const	*dog = new Dog();
	Animal const	*cat = new Cat();
	delete dog;
	delete cat;
	std::cout << std::endl;

	Animal	*array[SIZE_ARRAY];
	for (int i = 0; i < SIZE_ARRAY; i++)
	{
		if (i % 2 == 0)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	std::cout << std::endl;

	for (int i = 0; i < SIZE_ARRAY; i++)
		array[i]->make_sound();
	std::cout << std::endl;

	for (int i = 0; i < SIZE_ARRAY; i++)
		delete array[i];
	std::cout << std::endl;

	Dog	dog1;
	std::cout << std::endl;
	{
		Dog dog2(dog1);
		std::cout << dog2 << std::endl;
	}
	std::cout << std::endl;
	std::cout << dog1 << std::endl;
	std::cout << std::endl;

	Cat	cat1;
	std::cout << std::endl;
	{
		Cat cat2 = cat1;
		std::cout << cat2 << std::endl;
	}
	std::cout << std::endl;
	std::cout << cat1 << std::endl;
	std::cout << std::endl;

	return (EXIT_SUCCESS);
}