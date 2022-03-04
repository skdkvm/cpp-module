#include "mutantstack.hpp"
#include "mutantstack.cpp"
#include <list>

int main()
{
	std::cout << "===== MutantStack test =====" <<  std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << Green << mstack.top() << Reset << std::endl;
	mstack.pop();
	std::cout << Green << mstack.size() << Reset << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "mstack begin : " << Green << *it << Reset << std::endl;
	std::cout << "mstack end : "<< Green << *(ite - 1) << Reset << std::endl;
	++it;
	std::cout << "mstack begin + 1 : " << Green << *it << Reset << std::endl;
	--it;
	std::cout << "mstack list : ";
	while (it != ite)
	{
		std::cout << Green << *it << " ";
		++it;
	}
	std::cout << Reset << std::endl;

	std::cout << "===== List test =====" << std::endl;
	std::list<int>	ltest;
	ltest.push_back(5);
	ltest.push_back(17);
	std::cout << Yellow << ltest.back() << Reset << std::endl;
	ltest.pop_back();
	std::cout << Yellow << ltest.size() << Reset << std::endl;
	ltest.push_back(3);
	ltest.push_back(5);
	ltest.push_back(737);
	ltest.push_back(0);
	std::list<int>::iterator lit = ltest.begin();
	std::list<int>::iterator lite = ltest.end();
	std::cout << "ltest begin : " << Yellow << *lit << Reset << std::endl;
	std::cout << "ltest end : " << Yellow << ltest.back() << Reset<< std::endl;
	++lit;
	std::cout << "ltest begin + 1 : " << Yellow << *lit << Reset << std::endl;
	--lit;
	std::cout << "ltest list : ";
	while (lit != lite)
	{
		std::cout << Yellow << *lit << " ";
		++lit;
	}
	std::cout << Reset << std::endl;
	
	std::stack<int> s(mstack);
	mstack.pop();
	mstack.push(42);
	mstack.push(77);
	std::cout << Green << "copy check " << Reset << std::endl;
	std::cout << Green << "size : " << Reset <<  s.size() << std::endl;
	std::cout << Green << "top : " << Reset << s.top() << std::endl;
	std::cout << Green << "mstack check " << Reset << std::endl;
	std::cout << Green << "size : " << Reset << mstack.size() << std::endl;
	std::cout << Green << "top : " << Reset << mstack.top() << std::endl;
	return 0;
}
