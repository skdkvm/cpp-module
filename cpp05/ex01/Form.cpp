#include "Form.hpp"

Form::Form() : name("Default"), signGrade(0), execGrade(0), sign(false)
{
	std::cout << Green << "Form Default Constructor called" << Reset << std::endl;
}

Form::Form(std::string const N, int Sign, int Exec) : name(N), signGrade(Sign), execGrade(Exec)
{
	std::cout << Green << "Form string Constructor called" << Reset << std::endl;
	this->sign = false;
	try
	{
		if (Sign < 1 || Exec < 1)
			throw (GradeTooHighException());
		if (Sign > 150 || Exec > 150)
			throw (GradeTooLowException());
	}
	catch(std::exception & e)
	{
		std::cout << Blue << e.what() << Reset << std::endl;
	}
}
Form::Form(const Form &ref) : name(ref.name), signGrade(ref.signGrade), execGrade(ref.execGrade)
{
	std::cout << Green << "Form Copy Constructor called" << Reset << std::endl;
	*this = ref;
}

Form& Form::operator=(const Form &ref)
{
	std::cout << Green << "Form Assignation Operator called" << Reset << std::endl;
	sign = ref.sign;
	return *this;
}

Form::~Form()
{
	std::cout << Red << "Form Destructor called" << Reset << std::endl;
}

std::string		Form::getName() const
{
	return name;
}

int	Form::getSignGrade() const
{
	return signGrade;
}

int	Form::getExecGrade() const
{
	return execGrade;
}

bool			Form::getSign() const
{
	return sign;
}

void		Form::beSigned(Bureaucrat &b)
{
	try {
		if (b.getGrade() > signGrade)
		{
			throw GradeTooLowException();
		}
		this->sign = true;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form : Grade is too high.\n";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form : Grade is too low.\n";
}

std::ostream& operator<<(std::ostream& o, const Form& f)
{
	o << "< " << f.getName() << " >" << std::endl;
	o << "Sign grade : " << f.getSignGrade() << std::endl;
	o << "Exec grade : " << f.getExecGrade() << std::endl;
	o << "Signed     : " << f.getSign() << std::endl;
	return (o);
}