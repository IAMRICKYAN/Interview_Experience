#include <iostream>
#include <vector>
#include <concepts>
#include <type_traits> // 包含std::is_integral





int main()
{
	int* p = new int(10); //// 分配一个int类型的对象，调用其构造函数（如果有）进行初始化为10。

	int* pArray = new int[10]; //分配一个包含10个int对象的数组，但是对象没有初始化
	//C++11及以后 可以使用初始化器列表
	int* pArray = new int[10] {1, 2, 3, 4, 5}; //分配并初始化数组的前5个元素


	void* rawMemory = malloc(sizeof(int) * 10);
	int* pArray = new(rawMemory) int[10]; //在已经分配的内存上构造数组

	std::vector<int>* pVector = new std::vector<int>{ 1,2,3,4,5 }; //分配并初始化一个std::vector

	auto p = new auto('a'); // 分配一个char类型的对象并初始化为'a'

	delete p;

	delete[] pArray;
}