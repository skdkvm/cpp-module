#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
/*ansi colors
위와 같이 표준출력에 이를 입력하면 이후에 표준출력으로 나오는 값들의 색상이 변경되어 나온다.
사용한 이후 Reset인 \e[0m으로 색상을 다시 원상복구 시켜야 한다.
*/
# define Black            "\e[30m"
# define Blue             "\e[34m"
# define Green            "\e[32m"
# define Cyan             "\e[36m"
# define Red              "\e[31m"
# define Purple           "\e[35m"
# define Brown            "\e[33m"
# define Gray             "\e[37m"
# define DarkGray         "\e[30m"
# define Yellow           "\e[33m"
# define White            "\e[37m"
# define Reset            "\e[0m"

class ClapTrap
{
	private:
		std::string	name;
		int			HP;
		int			EP;
		int			AD;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &ref);
		~ClapTrap();
	
		ClapTrap &operator=(const ClapTrap &ref);
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		unsigned int	getDamage(void) const;
};

#endif