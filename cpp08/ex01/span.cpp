#include "span.hpp"

Span::Span():maxSize(0){}

Span::Span(unsigned int i)
{
	this->maxSize = i;
	vec.reserve(i);
}

Span::Span(const Span& ref)
{
	*this = ref;
}

Span& Span::operator=(const Span& ref)
{
	this->maxSize = ref.maxSize;
	this->vec.clear();
	this->vec = ref.vec;
	return *this;
}

Span::~Span()
{
	this->vec.clear();
}

void	Span::addNumber(int n)
{
	if (vec.size() == maxSize)
		throw std::length_error("Cannot add, vec is full!");
	vec.push_back(n);
}

unsigned int		Span::shortestSpan()
{
	if (maxSize < 2)
			throw std::length_error("Can't test. Not enough elements to compare");
	std::vector<int> temp = vec;
	std::sort(temp.begin(), temp.end());
	int	min = temp.back() - temp.front();
	std::vector<int>::iterator	prev = temp.begin();
	std::vector<int>::iterator	next = temp.begin() + 1;
	while (next != temp.end())
	{
		if (*next - *prev < min)
			min = *next - *prev;
		prev++;
		next++;
	}
	return (min);
}

unsigned int		Span::longestSpan()
{
	if (maxSize < 2)
			throw std::length_error("Can't test. Not enough elements to compare");
	std::vector<int> temp = vec;
	std::sort(temp.begin(), temp.end());
	return temp.back() - temp.front();
}
