#include <iostream>

class Myclass {
public:
	static void* operator new (size_t size) {

		static char pool[sizeof(Myclass) * 100];
		static int index = 0;

		if (index < 100)
		{
			void* ptr = pool + (index * sizeof(Myclass));
			return ptr;
		}
		else
		{
			throw std::bad_alloc();
		}

	}

	static void operator delete(void* ptr) noexcept{

	}

};

int main()
{
	try
	{
		Myclass* obj = new Myclass();
		delete obj;
	}
	catch (const std::bad_alloc& e)
	{
		std::cerr << "Memory allocation failed: " << e.what() << std::endl;
	}

	return 0;
}