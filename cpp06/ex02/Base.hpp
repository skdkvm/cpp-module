#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>
# include <exception>

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

class	Base
{
	public:
		virtual ~Base();
};

#endif