#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate()
{
	srand(time(NULL));
	int	rand = std::rand() % 3;
	if (rand == 0)
		return (new A());
	if (rand == 1)
		return (new B());
	else
		return (new C());
}

void	identify(Base* p)
{
	std::cout << Green << "-------- Pointer --------" << Reset << std::endl;
	if (dynamic_cast<A*>(p))
	{
		std::cout << Yellow << "This class Pointer : A " << Reset << std::endl;
		return ;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << Yellow << "This class Pointer : B " << Reset << std::endl;
		return ;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << Yellow << "This class Pointer : C " << Reset << std::endl;
		return ;
	}
	std::cerr << Red << "These pointers are not all A, B, and C." << Reset << std::endl;
}

void	identify(Base& p)
{
	std::cout << Green << "------- Reference -------" << Reset << std::endl;
	Base	b;
	try
	{
		b = dynamic_cast<A&>(p);
		std::cout << Green << "This class Reference : A " << Reset << std::endl;
	}
	catch(const std::exception& e){}
	try
	{
		b = dynamic_cast<B&>(p);
		std::cout << Green << "This class Reference : B " << Reset << std::endl;
	}
	catch(const std::exception& e){}
	try
	{
		b = dynamic_cast<C&>(p);
		std::cout << Green << "This class Reference : C " << Reset << std::endl;
	}
	catch(const std::exception& e){}
}

int main()
{
	srand(time(NULL));

	Base* test;
	
	test = generate();
	identify(test);
	identify(*test);
	delete test;
	return 0;
}