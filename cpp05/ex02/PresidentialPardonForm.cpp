#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref) : Form("Presidential Pardon", 25, 5)
{
	this->target = ref.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{
	if (this != &ref)
	{
		this->target = ref.getTarget();
		this->sign = ref.getSign();
	}
	return (*this);
}
PresidentialPardonForm::~PresidentialPardonForm() {}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSign() == false) //1. 폼이 사인되어있는지 확인
		throw	NotSigned();
	else if (executor.getGrade() > this->getExecGrade()) //2. 실행할수 있는지 확인
		throw	GradeTooLowException();
	std::cout << "<" << getTarget() << "> has been pardoned by Zafod Beeblebrox." << std::endl;
}