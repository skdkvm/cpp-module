#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &ref)
{
	*this = ref;
}

Intern& Intern::operator=(const Intern &ref)
{
	if (this != &ref)
		*this = ref;
	return (*this);
}

Intern::~Intern(){}

Form*	Intern::makeShrubberyCreationForm(std::string& target)
{
	return new ShrubberyCreationForm(target);
}

Form*	Intern::makeRobotomyRequestForm(std::string& target)
{
	return new RobotomyRequestForm(target);
}

Form*	Intern::makePresidentialPardonForm(std::string& target)
{
	return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(std::string form, std::string target)
{
	std::cout << "Intern have to create < " << form << " > form for \"" << target << "\" >>" << std::endl;
	Form*	(Intern::*func[])(std::string&) = {
		&Intern::makeShrubberyCreationForm,
		&Intern::makeRobotomyRequestForm,
		&Intern::makePresidentialPardonForm
	};
	std::string	form_name[] = {
		"shrubbery create",
		"robotomy request",
		"presidential pardon"
	};
	int i = 0;
	while (i < 3)
	{
		if (form == form_name[i])
			break;
		i++;
	}
	try
	{
		if(i == 3)
			throw(UnknownFormException());
		std::cout << "\tIntern creates < " << form << " > form. This form's target is \" " << target << " \".\n";
		return (this->*func[i])(target);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what();
	}
	return NULL;
}

const char*	Intern::UnknownFormException::what() const throw()
{
	return "\tIntern : What the fuck???????? I don't have any data about this form.\n"; 
}
