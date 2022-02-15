#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <cstdlib>

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

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &ref);
		~Brain();
	
		Brain& operator=(const Brain &ref);
		void	printFirstIdeas(void) const;
		void	setIdeas();
};

#endif