#include <stdlib.h>
#include <stdio.h>

int main()
{
	void* p1, *p2, *p3, *p4;

	p1 = malloc(512);
	p2 = malloc(128);
	p3 = malloc(256);

	free(p2);

	p4 = malloc(512); //�ܿ���ʧ�ܣ���Ϊp2�ͷŵ��ڴ治����

	if (p4 == NULL)
		printf("����ʧ�ܣ�������Ϊ�ڴ���Ƭ��\n");
	else
		printf("����ɹ�\n");

	free(p1);
	free(p3);
	//free(p4);  //�������ʧ������Ҫ�ͷ�

	return 0;
}