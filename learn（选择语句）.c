#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//第五部分 语句

//选择语句

int main()
{
	int input = 0;//输入的值
	printf("加入比特:>\n");
	printf("要好好学习吗(1/0)?>:");
	scanf("%d", &input);

	if (input == 1)
	{
		printf("好offer\n");
	}
	else
	{
		printf("卖红薯\n");
	}
	return 0;
}