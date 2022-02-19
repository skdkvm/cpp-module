
#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main()
{
	Form F1("F1", 100, 70);
	Form F2("F2", 70, 30);
	Bureaucrat B("B", 80);

	std::cout << F1 << std::endl;
	std::cout << F2 << std::endl;
	std::cout << B << std::endl;
	std::cout << "===== B want sign F1 =====\n\n";
	B.signForm(F1);
	try
	{
		F1.beSigned(B);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << F1 << std::endl;
	std::cout << "===== B want sign F2 =====\n\n";
	B.signForm(F2);
	try
	{
		F2.beSigned(B);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << F2 << std::endl;

	return (0);
}