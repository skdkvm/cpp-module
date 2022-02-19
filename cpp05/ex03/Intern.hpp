#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern 
{
	public:
		Intern();
		Intern(const Intern &ref);
		Intern& operator=(const Intern &ref);
		~Intern();
		Form*	makeShrubberyCreationForm(std::string& target);
		Form*	makeRobotomyRequestForm(std::string& target);
		Form*	makePresidentialPardonForm(std::string& target);
		Form*	makeForm(std::string form, std::string target);
		class	UnknownFormException:public std::exception
		{
			const char*	what() const throw();
		};
};

#endif