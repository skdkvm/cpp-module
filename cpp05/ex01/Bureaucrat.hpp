#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <exception>

# include "Form.hpp"

# define Black            "\e[30m"
# define Blue             "\e[34m"
# define Green            "\e[32m"
# define Cyan             "\e[36m"
# define Red              "\e[31m"
# define Purple           "\e[35m"
# define Gray             "\e[37m"
# define Yellow           "\e[33m"
# define White            "\e[37m"
# define Reset            "\e[0m"

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int	grade;
		
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, const int grade);
		Bureaucrat(const Bureaucrat &ref);
		~Bureaucrat();
	
		Bureaucrat& operator=(const Bureaucrat &ref);
		std::string	getName() const;
		int			getGrade() const;
		void		increaseGrade();
		void		decreaseGrade();
		void	signForm(Form &f);
	
		class	GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			const char* what() const throw();			
		};
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& ref);

#endif