#include <iostream>

int main()
{
	int *p = new int(5);
	
	std::cout << &p << std::endl; // direccion en el heap
	std::cout << p << std::endl;  // direccion en el stack
	return 0;
}