#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

typedef enum	e_levels
{
	DEBUG = 0,
	INFO,
	WARNING,
	ERROR
}				t_levels;

class Harl
{
	public:
		Harl();
		~Harl();
		void	complain(std::string level);

	private:
		void	_debug();
		void	_info();
		void	_warning();
		void	_error();

		struct			s_ft_array
		{
			t_levels	levels;
			const char	*str;
			void		(Harl::*func)();
		}				s_ft_array[4];
};

#endif //HARL_HPP
