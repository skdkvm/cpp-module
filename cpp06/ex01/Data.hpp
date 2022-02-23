#ifndef	DATA_HPP
# define DATA_HPP

# include <iostream>

typedef	struct	Data 
{
	int			i;
	char		c;
}	Data;

uintptr_t	serialize(Data* ptr);
Data* 		deserialize(uintptr_t raw);

#endif