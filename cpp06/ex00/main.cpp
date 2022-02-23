#include "Scalar.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Needs one argument\n";
		return (0);
	}
	Scalar convert(av[1]);
	convert.convert();
	return (0);
}