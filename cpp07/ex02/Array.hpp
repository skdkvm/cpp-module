#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

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
class	Array
{
	private:
		T				*arr;
		unsigned int	n;
	public:
		Array() { this->arr = new T[0], this->n = 0; }
		Array(unsigned int n) { this->arr = new T[n], this->n = n; }
		Array(const Array &ref)
		{
			this->n = ref.n;
			this->arr = new T[this->n];
			for (unsigned int i = 0; i < n; i++)
					this->arr[i] = ref.arr[i];
		}
		~Array(){ delete this->arr; }
	
		Array& operator=(const Array &ref)
		{
			if (this!= &ref)
			{
				if (n > 0)
					delete [] this->arr;
				this->n = ref.n;
				this->arr = new T[this->n];
				for (unsigned int i = 0; i < n; i++)
					this->arr[i] = ref.arr[i];
			}
			return *this;
		}
	
		class Rangeover : public std::exception
		{
			public:
					virtual  const char *what() const  throw()
					{
						return "Index Rangeover";
					}
					virtual ~Rangeover() throw() {}
			
		};
	
		T&	operator[](long long int i)
		{
			if (i >= this->n || i < 0)
					throw Rangeover();
			return this->arr[i];
		}
	
		unsigned int	size() const { return this->n; }
			
};

#endif