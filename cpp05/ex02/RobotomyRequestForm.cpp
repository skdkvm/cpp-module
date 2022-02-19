#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref) : Form("Robotomy Request", 72, 45)
{
	this->target = ref.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& ref)
{
	if (this != &ref)
	{
		this->target = ref.getTarget();
		this->sign = ref.getSign();
	}
	return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm() {}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSign() == false)
		throw	NotSigned();
	else if (executor.getGrade() > this->getExecGrade())
		throw	GradeTooLowException();
	std::cout << "Dddddddddd... Drrrrrrrr..." << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << "<" << getTarget() << "> has been robotomized successfully" << std::endl;
	else
		std::cout << "<" << getTarget() << "> has not been robotomized successfully" << std::endl;
}