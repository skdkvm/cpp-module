#include "Scalar.hpp"

Scalar::Scalar() : input(NULL) {}

Scalar::Scalar(char* input) : input(input) {}

Scalar::Scalar(const  Scalar &ref)
{
	this->input = ref.input;
}

Scalar::~Scalar(){}

Scalar& Scalar::operator=(const Scalar &ref)
{
	this->input = ref.input;
	return *this;
}

std::string	Scalar::getImpo() const
{
	return this->impossible;
}

void	Scalar::printImpo()
{
	std::cout << Yellow << "char		: impossible" << Reset << std::endl;
	std::cout << Yellow << "int		: impossible" << Reset << std::endl;
	std::cout << Yellow << "float		: " << getImpo() << "f" << Reset << std::endl;
	std::cout << Yellow << "double		: " << getImpo() << Reset << std::endl;
}

int		Scalar::checkType()
{
	const std::string	impossible[4] = {"inf", "+inf", "-inf", "nan"};

	if (this->input == NULL)
		return IS_ERROR;
	for (int i = 0; i < 4; i++) {
		if (this->input == impossible[i] || this->input == (impossible[i] + "f"))
		{
			this->impossible = impossible[i];
			return IS_IMPOSSIBLE;
		}
	}
	if (strlen(this->input) == 1 && !isdigit(this->input[0]))
		return IS_CHAR;
	else {
		int i = 0;
		if (this->input[i] == '+' || this->input[i] == '-')
		{
			if (this->input[i + 1] == '\0')
				return IS_ERROR;
			i++;
		}
		while (isdigit(this->input[i]))
			i++;
		if (this->input[i] == '.' && this->input[i + 1] != '\0')
			i++;
		else if (this->input[i] == '\0')
			return IS_INT;
		else
			return IS_ERROR;
		while (isdigit(this->input[i]))
			i++;
		if (this->input[i] == 'f' && this->input[i + 1] == '\0')
			return IS_FLOAT;
		else if (this->input[i] == '\0')
			return IS_DOUBLE;
	}
	return IS_ERROR;
}

void	Scalar::printChar(char c)
{
	if (isprint(c) == 0)
		std::cout << Green << "char		:		Non displayable" << Reset << std::endl;
	else
		std::cout << Green << "char		:		'" << c << "'" << Reset << std::endl;
	std::cout << Green << "int		:		" << static_cast<int>(c) << Reset << std::endl;
	std::cout << Green << "float		:		" << static_cast<float>(c) << ".0f" << Reset << std::endl;
	std::cout << Green << "double		:		" << static_cast<double>(c) << ".0" << Reset <<std::endl;
}

void	Scalar::printInt(long i)
{
	if (i > INT_MAX || i < INT_MIN)
	{
		std::cout << Red << "Error : Range Over" << Reset << std::endl;
		return ;
	}
	if (isprint(i) == 0)
		std::cout << Green << "char		:		Non displayable" << Reset << std::endl;
	else
		std::cout << Green << "char		:		'" << static_cast<char>(i) << "'" << Reset << std::endl;
	std::cout << Green << "int		:		" << i << Reset << std::endl;
	std::cout << Green << "float		:		" << static_cast<float>(i) << ".0f" << Reset << std::endl;
	std::cout << Green << "double		:		" << static_cast<double>(i) << ".0" << Reset <<std::endl;
}

void	Scalar::printFloat(float f)
{
	if (isprint(f) == 0)
		std::cout << Green << "char		:		Non displayable" << Reset << std::endl;
	else
		std::cout << Green << "char		:		'" << static_cast<char>(f) << "'" << Reset << std::endl;
	std::cout << Green << "int		:		" << static_cast<int>(f) << Reset << std::endl;
	if (f - static_cast<int>(f) == 0)
	{
		std::cout << Green << "float		:		" << f << ".0f" << Reset << std::endl;
		std::cout << Green << "double		:		" << static_cast<double>(f) << Reset << std::endl;
	}
	else
	{
		std::cout << Green << "float	:		" << f << "f" << Reset << std::endl;
		std::cout << Green << "double	:		" << static_cast<double>(f) << Reset << std::endl;
	}
}

void	Scalar::printDouble(double d)
{
	if (isprint(d) == 0)
		std::cout << Green << "char		:		Non displayable" << Reset << std::endl;
	else
		std::cout << Green << "char		:		'" << static_cast<char>(d) << "'" << Reset << std::endl;
	std::cout << Green << "int		:		" << static_cast<int>(d) << Reset << std::endl;
	if (d - static_cast<int>(d) == 0)
	{
		std::cout << Green << "float		:		" << static_cast<float>(d) << "0.0f" << Reset << std::endl;
		std::cout << Green << "double		:		" << d  << ".0" << Reset << std::endl;
	}
	else
	{
		std::cout << Green << "float		:		" << static_cast<float>(d) << "f" << Reset << std::endl;
		std::cout << Green << "double		:		" << d << Reset << std::endl;
	}
}

void	Scalar::convert()
{
	int type = checkType();
	
	if (type == IS_IMPOSSIBLE) {
		printImpo();
	}
	else if (type == IS_INT) {
		long i = atol(this->input);
		printInt(i);
	}
	else if (type == IS_CHAR) {
		char c = this->input[0];
		printChar(c);
	}
	else if (type == IS_DOUBLE) {
		char* end;
		double d = strtod(this->input, &end);
		printDouble(d);
	}
	else if (type == IS_FLOAT) {
		float f = atof(this->input);
		printFloat(f);	
	}
	else {
		std::cout << "char	: impossible" << std::endl;
		std::cout << "int	: impossible" << std::endl;
		std::cout << "float 	: impossible" << std::endl;
		std::cout << "double 	: impossible" << std::endl;
	}
}
