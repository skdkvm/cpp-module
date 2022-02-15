#include "Bureaucrat.hpp"

int		main()
{
	std::cout << "================= Constructor =================|" << std::endl;
	Bureaucrat a("test1", 0);
	Bureaucrat b("test2", 151);
	Bureaucrat c("test3", 10);
	Bureaucrat d("test4", 1);
	Bureaucrat e("test5", 150);
	std::cout << "===============================================\n" << std::endl;
	std::cout << "================== Test Line ==================|" << std::endl;
	std::cout << "\n<< c test3 >>" << std::endl;
	std::cout << c << std::endl;
	c.increaseGrade();
	std::cout << c << std::endl;
	c.decreaseGrade();
	std::cout << c << std::endl;
	std::cout << "\n<< d test4 >>" << std::endl;
	std::cout << d << std::endl;
	d.increaseGrade();
	std::cout << d << std::endl;
	d.decreaseGrade();
	std::cout << d << std::endl;
	std::cout << "\n<< e test5 >>" << std::endl;
	std::cout << e << std::endl;
	e.decreaseGrade();
	std::cout << e << std::endl;
	e.increaseGrade();
	std::cout << e << std::endl;
	std::cout << "================== Test End  ==================|\n" << std::endl;
	std::cout << "=================  Destructor =================|" << std::endl;

	return (0);
}