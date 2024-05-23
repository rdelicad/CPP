#include "easyfind.hpp"
#include <vector>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error!!" << std::endl;
		return 1;
	}

	std::vector<int> v;
	int i = 0;

	while (i < 100)
	{
		v.push_back(i);
		i++;
	}

	try
	{
		easyfind(v, atoi(av[1]));
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}