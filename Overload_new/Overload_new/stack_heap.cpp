#include <iostream>

void f()
{
	int* p = new int[5];
}


int main()
{
	std::cout << __cplusplus << std::endl;
	f();
}