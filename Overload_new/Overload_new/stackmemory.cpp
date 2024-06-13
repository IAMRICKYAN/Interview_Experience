#include <stdio.h>


void function(int level)
{
	int localVariable = level;
	if (level > 0)
	{
		function(level - 1);
	}
	printf("栈层级：%d，变量值：%d\n", level, localVariable);
}

int main()
{
	function(3);
}