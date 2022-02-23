#include "iter.hpp"
#include <string>
#include <iostream>

class Awesome
{
	public :
		Awesome(void) : _n(42) {return ;}
		int get(void) const {return this->_n;}
	private :
		int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.get();
	return o;
}
template< typename T >
void print( T const & x )
{
	std::cout << x << std::endl;
	return;
}

int main(void)
{
	std::cout << Yellow << "----- Test : int[] -----"<< Reset << std::endl;
	int intR[5] = { 0, 1, 2, 3, 4 };
	int *nullInt = NULL;
	iter(nullInt, 5, &show);
	iter(intR, 5, &show);
	std::cout << std::endl;

	std::cout << Yellow << "----- Test : float[] -----" << Reset << std::endl;
	float floatR[5] = { 0.0f, 1.1f, 2.2f, 3.3f, 4.4f };
	iter(floatR, 5, &show);
	std::cout << std::endl;

	std::cout << Yellow << "----- Test : double[] -----" << Reset << std::endl;
	double doubleR[5] = { 0.00, 1.11, 2.22, 3.33, 4.44 };
	iter(doubleR, 5, &show);
	std::cout << std::endl;

	std::cout << Yellow << "----- Test : Class -----" << Reset << std::endl;
	Awesome awesomes[5];
	::iter(awesomes, 5 , print);
	return (0);
}