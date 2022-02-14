#include <iomanip>
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"


int	main()
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
}