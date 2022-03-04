#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>

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

class	Span
{
	private:
		std::vector<int>	vec;
		unsigned int		maxSize;
	
	public:
		Span();
		Span(unsigned int i);
		Span(const Span& ref);
		Span& operator=(const Span& ref);
		~Span();
	
		void	addNumber(int n);
		template <typename T>
		void	addNumber(T const begin, T const end, unsigned int size)
		{
			if (maxSize - vec.size() < size)
				throw std::out_of_range("Error : size over");
			this->vec.insert(this->vec.end(), begin, end);
		}
		
		unsigned int		shortestSpan();
		unsigned int		longestSpan();
};

#endif