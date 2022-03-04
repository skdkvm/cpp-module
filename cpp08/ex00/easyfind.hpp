#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <iterator>

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

template <typename T>
int		easyfind(T &container, int i)
{
	typename T::iterator	iter;
	iter = std::find(container.begin(), container.end(), i);
	if (iter == container.end())
		throw std::out_of_range("Error : Cannot find value.\n");
	return *iter;
}

#endif