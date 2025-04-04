#ifndef ZOMBIE_H
#define ZOMBIE_H

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

class Zombie
{
	public:
		Zombie( void );
		~Zombie( void );
		void	announce( void );
		void	name_zombie( std::string name );

	private:
		std::string name;
};

Zombie*	zombieHorde( int N, std::string name);

#endif //ZOMBIE_H
