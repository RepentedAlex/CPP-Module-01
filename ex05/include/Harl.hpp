#ifndef HARL_HPP
#define HARL_HPP

#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

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
		void	complain( std::string level);

	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

		struct					s_ft_array
		{
			t_levels			levels;
			const char	*		str;
			void				(Harl::*func)();
		}						s_ft_array[4];
};

#endif //HARL_HPP
