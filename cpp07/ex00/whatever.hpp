#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	T	temp;
	temp = a;
	a = b;
	b = temp;
	return ;
}

template <typename T>
T	min(T a, T b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T	max(T a, T b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

class	AnyClass
{
private:
	int		num;
public:
	AnyClass():num(0) {}
	AnyClass( int n ):num(n) {}
	int		getNum() const { return num ; }
	bool	operator>(const AnyClass& otherObj) const { return num > otherObj.num ; }
	bool	operator<(const AnyClass& otherObj) const { return num < otherObj.num ; }
	bool	operator>=(const AnyClass& otherObj) const { return num >= otherObj.num ; }
	bool	operator<=(const AnyClass& otherObj) const { return num <= otherObj.num ; }
	bool	operator==(const AnyClass& otherObj) const { return num == otherObj.num ; }
	bool	operator!=(const AnyClass& otherObj) const { return num != otherObj.num ; }
};

std::ostream&	operator<<(std::ostream& out, const AnyClass& obj)
{
	out << obj.getNum();
	return out ;
}


#endif