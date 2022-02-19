#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref) : Form("Shrubbery Creation", 145, 137)
{
	this->target = ref.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ref)
{
	if (this != &ref)
	{
		this->target = ref.getTarget();
		this->sign = ref.getSign();
	}
	return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSign() == true)
	{
		if (this->execGrade < executor.getGrade())
		{
			std::cout << "Signed but can't execute -> ";
			throw Form::GradeTooLowException();
		}
		else
		{
			std::ofstream outFile;
			outFile.open(this->target + "_shrubbery");
            outFile << "        *     	" << std::endl;
            outFile << "       .#.      " << std::endl;
            outFile << "      .###.     " << std::endl;
            outFile << "     .#####.    " << std::endl;
            outFile << "    .#######.   " << std::endl;
            outFile << "   .#########.  " << std::endl;
            outFile << "  .###########. " << std::endl;
            outFile << "       ###      " << std::endl;
            outFile << "       ###      " << std::endl;
            outFile.close();
		}
	}
	else
	{
		std::cout << "No Shrubbery Creation\n";
		throw Form::NotSigned();
	}
}