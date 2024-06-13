#include <stdlib.h>
#include <stdio.h>

int main()
{
	void* p1, *p2, *p3, *p4;

	p1 = malloc(512);
	p2 = malloc(128);
	p3 = malloc(256);

	free(p2);

	p4 = malloc(512); //很可能失败，因为p2释放的内存不连续

	if (p4 == NULL)
		printf("分配失败，可能因为内存碎片。\n");
	else
		printf("分配成功\n");

	free(p1);
	free(p3);
	//free(p4);  //如果分配失败则不需要释放

	return 0;
}