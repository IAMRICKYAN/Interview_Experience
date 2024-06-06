#include <cstdlib>
#include <iostream>
#include <memory>
#include <string>

//int main()
//{
//	constexpr std::size_t size = 4;
//
//	if (auto ptr = reinterpret_cast<std::string*>(std::malloc(size * sizeof(std::string))))
//	{
//		try
//		{
//			for (std::size_t i = 0; i < size; i++)
//				std::construct_at(ptr + i, 5, 'a' + i);
//		}
//	}
//}