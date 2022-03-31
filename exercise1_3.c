#define _CRT_SECURE_NO_WARNINGS
//在数组中查找某一个特定的数字
#include <stdio.h>;
int main()
{
	int m[10];
	int i = 0;
	int n = 0;
	int t = 0;
	int a = 0;
	printf("请输入十个整数：");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &m[i]);
	}
	printf("请输入您要查找的数：");
	scanf("%d", &n);
	for (t = 0; t < 10; t++)
	{
		if (n == m[t])
		printf("您查找的数%d是第%d个数;\n", n, t + 1);
	}
	return 0;
}