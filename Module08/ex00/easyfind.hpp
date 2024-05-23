#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class valueNotFound : public std::exception
{
	public:  
		const char *what() const throw()
		{
			return ("\033[1;31mException: Value not found\033[0m");
		}
};

template<typename T>
void easyfind(const T &container, const int value)
{
	typename T::const_iterator it = std::find(container.begin(), container.end(), value);

	if (it == container.end())
		throw valueNotFound();
	
	std::cout << "\033[1;32mValue found: \033[0m" << *it << std::endl;
}

#endif