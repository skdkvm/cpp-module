#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
	//Bureaucrat	seonggki("seonggki", 150);
	Bureaucrat	seonggki("seonggki", 1);
	ShrubberyCreationForm	sh("home");
	RobotomyRequestForm		ro("robot");
	PresidentialPardonForm	pr("mint-chocolate");

	std::cout << "-------------- check status ------------\n";
	std::cout << seonggki;
	std::cout << sh << std::endl;
	std::cout << ro << std::endl;
	std::cout << pr << std::endl;
	std::cout << "-------------- is signed? ------------\n\n";
	sh.beSigned(seonggki);
	seonggki.executeForm(sh);
	ro.beSigned(seonggki);
	seonggki.executeForm(ro);
	pr.beSigned(seonggki);
	seonggki.executeForm(pr);
	
	return (0);
}