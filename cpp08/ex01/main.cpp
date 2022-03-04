#include "span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		sp.addNumber(24);
	}
	catch(const std::exception& e)
	{
		std::cerr << Red << e.what() << Reset <<'\n';
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << Green << "Basic test is over" << Reset << std::endl;

	srand(time(NULL));
	Span	test = Span(10000);
	std::vector<int>	temp;
	for (int i = 0; i < 10000; i++)
		temp.push_back(rand());
	std::cout << Yellow << "Testing 1" << Reset << std::endl;
	try
	{
		std::cout << "Testing about add 10000 number" << std::endl;
		test.addNumber(temp.begin(), temp.end(), temp.size());
		std::cout << Green << "Testing success" << Reset << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << Red << e.what() << Reset << '\n';
	}
	std::cout << Yellow << "Testing 2" << Reset << std::endl;
	try
	{
		std::cout << "Testing about add 10000 number" << std::endl;
		test.addNumber(temp.begin(), temp.end(), temp.size());
	}
	catch(const std::exception& e)
	{
		std::cerr << Red << e.what() << Reset << '\n';
	}
	std::cout << test.shortestSpan() << std::endl;
	std::cout << test.longestSpan() << std::endl;
	return 0;
}