#ifndef HARL_HPP
#define HARL_HPP

#include <iostream> // not in the .hpp please
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
		// why ft? why array? your struct is not an array...
		// idea for new name:
		//	-> s_binding
		//	-> s_table
		{
			t_levels	levels;
			const char	*str;
			void		(Harl::*func)();
		}				s_ft_array[4];
};

#endif //HARL_HPP
