#include "Intern.hpp"

void	InternMakeForm(std::string formName, std::string target)
{
	Intern	seonggki;
	Form*	form;
	form = seonggki.makeForm(formName, target);

	if (form)
	{
		std::cout << "\nResult : SUCCESS\n";
		std::cout << *form;
		std::cout << "[ Target ]\n\t";
		std::cout << (*(RobotomyRequestForm*)form).getTarget() << std::endl;
		delete form;
	}
	else
		std::cout << "\nResult : FAIL\n";
}

int		main()
{
	std::cout << "\n=================\n\n";
	InternMakeForm("shrubery Creation", "Office");
	std::cout << "\n=================\n\n";
	InternMakeForm("shrubbery create", "Office");
	std::cout << "\n=================\n\n";
	InternMakeForm("Robotomy request", "Intern1");
	std::cout << "\n=================\n\n";
	InternMakeForm("robotomy request", "Intern1");
	std::cout << "\n=================\n\n";
	InternMakeForm("Presidential pardon", "Marvin");
	std::cout << "\n=================\n\n";
	InternMakeForm("presidential pardon", "Marvin");

	return (0);
}