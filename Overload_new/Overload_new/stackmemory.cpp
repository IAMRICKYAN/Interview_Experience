#include <stdio.h>


void function(int level)
{
	int localVariable = level;
	if (level > 0)
	{
		function(level - 1);
	}
	printf("ջ�㼶��%d������ֵ��%d\n", level, localVariable);
}

int main()
{
	function(3);
}