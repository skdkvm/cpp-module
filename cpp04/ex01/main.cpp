#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int	main()
{
	Animal *Ani[4];
	for (int i = 0; i < 4; i++) {
		if (i % 2 == 0) {
			Ani[i] = new Dog();	
		}
		else {
			Ani[i] = new Cat();
		}
	}

	std::cout << "--------test 1 start----------" << std::endl;
	
	for (int i = 0; i < 4; i++) {
		std::cout << Ani[i]->getType() << " : ";
		Ani[i]->makeSound();
	}
	
	for (int i = 0; i < 4; i++) {
		delete Ani[i];
	}
	std::cout << "--------test 1 end----------" << std::endl;

	Dog test;
	Dog	temp = test;

	std::cout << "test : ";
	test.showBrain();
	std::cout << "temp : ";
	temp.showBrain();

	std::cout << "\nsetting brain" << std::endl;
	test.resetBrain();

	std::cout << "test : ";
	test.showBrain();
	std::cout << "temp : ";
	temp.showBrain();
	std::cout << "\ntesting end" << std::endl;
	
	system("leaks Deep");
	return 0;
}