#include "Form.hpp"

Form::Form(std::string const N, int Sign, int Exec) : name(N), signGrade(Sign), execGrade(Exec)
{
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
	*this = ref;
}

Form& Form::operator=(const Form &ref)
{
	sign = ref.sign;
	return *this;
}

Form::~Form()
{
	
}

std::string		Form::getName() const
{
	return name;
}

int		Form::getSignGrade() const
{
	return signGrade;
}

int		Form::getExecGrade() const
{
	return execGrade;
}

bool	Form::getSign() const
{
	return sign;
}

void	Form::beSigned(Bureaucrat &b)
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

const char* Form::NotSigned::what() const throw()
{
	return "Form : This Form isn't signed\n";
}

std::ostream& operator<<(std::ostream& o, const Form& f)
{
	o << "< " << f.getName() << " >" << std::endl;
	o << "Sign grade : " << f.getSignGrade() << std::endl;
	o << "Exec grade : " << f.getExecGrade() << std::endl;
	o << "\tThis is Signed?\t: ";
	if (f.getSign())
		o << "Signed" << std::endl;
	else
		o << "Not Signed" << std::endl;
	return o;
}