#include "Data.hpp"

int		main(void)
{
	Data* ptr = new Data;
	ptr->i = 42;
	ptr->c = '*';

	std::cout << "ptr : " << ptr << std::endl;
	std::cout << "data : " << ptr->i << " " << ptr->c << std::endl;
	
	uintptr_t	raw = serialize(ptr);
	std::cout << "raw int : " << raw << std::endl;
	Data*	new_ptr = deserialize(raw);
	std::cout << "new ptr : " << new_ptr << std::endl;
	std::cout << "new data : " << new_ptr->i << " " << new_ptr->c << std::endl;
	delete ptr;
}