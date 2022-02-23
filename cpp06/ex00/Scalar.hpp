#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <climits>
# include <cstring>

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

# define IS_CHAR		1
# define IS_INT			2
# define IS_FLOAT		3
# define IS_DOUBLE		4
# define IS_IMPOSSIBLE	5
# define IS_ERROR		6

class Scalar
{
	private:
		char*		input;
		std::string	impossible;
	public:
		Scalar();
		Scalar(char* input);
		Scalar(const Scalar &ref);
		~Scalar();
	
		Scalar& operator=(const Scalar &ref);
		
		std::string getImpo() const;
		void		convert();
		int 		checkType();
		void		printImpo();
		void		printChar(char c);
		void		printInt(long i);
		void		printFloat(float f);
		void		printDouble(double d);
};

#endif