#include <stdalign.h>
#include <stdio.h>

//struct S �Ķ�����Է������κε�ַ
//��ΪS.a S.b���Է������κε�ַ

struct S
{
	char a; // ��Ա�����С��1�����룺1
	char b; // ��Ա�����С��1�����룺1
}; //�ṹ������С: 2������: 1


// struct X �Ķ����������� 4�ֽڱ߽�
// ��Ϊ X.n ��������� 4 �ֽڱ߽�
// ��Ϊ int �Ķ���Ҫ��ͨ������ 4
struct X
{
	int n; // ��Ա�����С��4�����룺4
	char c; // ��Ա�����С��1�����룺1
	// ʣ��������ֽڽ��п�λ���
}; // �ṹ������С��8�����룺4

int main(void)
{
	printf("sizeof(struct S) = %zu\n", sizeof(struct S));
	printf("alignof(struct S) = %zu\n", alignof(struct S));
	printf("sizeof(struct X) = %zu\n", sizeof(struct X));
	printf("alignof(struct X) = %zu\n", alignof(struct X));
}

