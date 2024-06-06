#include <stdalign.h>
#include <stdio.h>

//struct S 的对象可以分配于任何地址
//因为S.a S.b可以分配于任何地址

struct S
{
	char a; // 成员对象大小：1，对齐：1
	char b; // 成员对象大小：1，对齐：1
}; //结构体对象大小: 2，对齐: 1


// struct X 的对象必须分配于 4字节边界
// 因为 X.n 必须分配于 4 字节边界
// 因为 int 的对齐要求（通常）是 4
struct X
{
	int n; // 成员对象大小：4，对齐：4
	char c; // 成员对象大小：1，对齐：1
	// 剩余的三个字节进行空位填充
}; // 结构体对象大小：8，对齐：4

int main(void)
{
	printf("sizeof(struct S) = %zu\n", sizeof(struct S));
	printf("alignof(struct S) = %zu\n", alignof(struct S));
	printf("sizeof(struct X) = %zu\n", sizeof(struct X));
	printf("alignof(struct X) = %zu\n", alignof(struct X));
}

