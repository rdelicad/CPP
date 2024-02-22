#include <iostream>
#include <vector>

int main()
{
	std::vector<int> var;
	var.push_back(2);
	var.push_back(3);
	var.push_back(5);
	var.push_back(965);
	for (std::vector<int>::size_type i = 0; i < var.size(); i++)
		std::cout << var.at(i) << std::endl;
	for (std::vector<int>::iterator it = var.begin(); it != var.end(); ++it)
    {
        std::cout << (*it) << std::endl;
    }
	std::vector<int>::iterator it = var.begin();
    while (it != var.end())
    {
        std::cout << (*it) << std::endl;
        ++it;
    }
	for (std::vector<int>::reverse_iterator it = var.rbegin(); it != var.rend(); ++it)
		std::cout << (*it) << std::endl;
}