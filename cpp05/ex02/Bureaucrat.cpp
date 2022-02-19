#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, const int grade) : name(name)
{
	try
	{
		if (grade < 1)
			throw (GradeTooHighException());
		if (grade > 150)
			throw (GradeTooLowException());
		this->grade = grade;
	}
	catch(std::exception & e)
	{
		std::cout << Blue << e.what() << Reset << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &ref) : name(ref.name)
{
	*this = ref;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &ref)
{
	grade = ref.grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

std::string	Bureaucrat::getName() const
{
	return this->name;
}

int	Bureaucrat::getGrade() const
{
	return this->grade;
}

void	Bureaucrat::increaseGrade()
{
	std::cout << Yellow << "increaseGrade  called" << Reset << std::endl;
	this->grade--;
	try
	{
		if (grade < 1)
			throw (GradeTooHighException());
	}
	catch (std::exception& e)
	{
		std::cout << Blue << e.what() << Reset << std::endl;
	}
}

void	Bureaucrat::decreaseGrade()
{
	std::cout << Yellow << "decreaseGrade  called" << Reset << std::endl;
	this->grade++;
	try
	{
		if (grade > 150)
			throw (GradeTooHighException());
	}
	catch (std::exception& e)
	{
		std::cout << Blue << e.what() << Reset << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & f)
{
	try
	{
		f.execute(*this);
		std::cout << name << " executes " << f.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Bureaucrat >> " << name << " cannot execute " << f.getName() << " because ";
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm(Form &f)
{
	if (f.getSign() == true)
	{
		std::cout << "< " << name << " > signs < " << f.getName() << " >" << std::endl;	
	}
	else
	{
		std::cout << "< " << name << " > cannot sign < " << f.getName() << " >  because < Grade is low >" << std::endl;	
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade too High\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException: Grade too Low\n";
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& ref)
{
	o << "< " << ref.getName() << " >, bureaucrat grade < " << ref.getGrade() << " >" << Reset << std::endl;
	return o;
}