#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

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

class Bureaucrat;

class Form
{
	private:
			const std::string	name;
			const int			signGrade;
			const int			execGrade;
			bool				sign;
	public:
		Form();
		Form(std::string const N, int Sign, int Exec);
		Form(const Form &ref);
		Form &operator=(const Form &ref);
		~Form();
		std::string		getName() const;
		bool				getSign() const;
		int				getExecGrade() const;
		int				getSignGrade() const;
		void			beSigned(Bureaucrat &b);
		class	GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			const char* what() const throw();			
		};
};

std::ostream& operator<<(std::ostream& o, const Form& f);

#endif