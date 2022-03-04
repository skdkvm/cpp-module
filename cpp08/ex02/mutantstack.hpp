#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <iterator>
# include <stack>

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
class MutantStack : public std::stack<T>
{
	public:
			MutantStack() : std::stack<T>() {}
			MutantStack(const MutantStack& ref) : std::stack<T>(ref) {}
			MutantStack<T>& operator=(const MutantStack& ref)
			{
				*this = ref;
				return *this;
			}
			virtual ~MutantStack() {}
			typedef typename std::stack<T>::container_type::iterator	iterator;
			iterator begin();
			iterator end();
			typedef typename std::stack<T>::container_type::const_iterator	const_iterator;
			const_iterator begin() const;
			const_iterator end() const;
			typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;
			reverse_iterator rbegin();
			reverse_iterator rend();
			typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;
			const_reverse_iterator	rbegin() const;
			const_reverse_iterator	rend() const;
};

#endif