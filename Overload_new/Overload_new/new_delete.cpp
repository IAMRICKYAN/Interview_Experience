#include <iostream>
#include <vector>
#include <concepts>
#include <type_traits> // ����std::is_integral





int main()
{
	int* p = new int(10); //// ����һ��int���͵Ķ��󣬵����乹�캯��������У����г�ʼ��Ϊ10��

	int* pArray = new int[10]; //����һ������10��int��������飬���Ƕ���û�г�ʼ��
	//C++11���Ժ� ����ʹ�ó�ʼ�����б�
	int* pArray = new int[10] {1, 2, 3, 4, 5}; //���䲢��ʼ�������ǰ5��Ԫ��


	void* rawMemory = malloc(sizeof(int) * 10);
	int* pArray = new(rawMemory) int[10]; //���Ѿ�������ڴ��Ϲ�������

	std::vector<int>* pVector = new std::vector<int>{ 1,2,3,4,5 }; //���䲢��ʼ��һ��std::vector

	auto p = new auto('a'); // ����һ��char���͵Ķ��󲢳�ʼ��Ϊ'a'

	delete p;

	delete[] pArray;
}