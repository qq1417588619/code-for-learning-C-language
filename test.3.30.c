#define _CRT_SECURE_NO_WARNINGS
//n的阶乘（do...while语句）
#include <stdio.h>;
int main()
{
	int i = 0;
	int n = 0;
	int sum = 1;
	printf("请输入一个整数n,n=");
	scanf("%d", &n);
	do
	{
		i++;
		sum = sum * i;
	}
	while (i < n);
	printf("n的阶乘sum=%d", sum);
	return 0;
}

//n的阶乘（for语句）
//#include <stdio.h>;
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	printf("请输入一个整数n，n=");
//	scanf("%d", &n);
//	for (i = 1; i < (n + 1); i++)
//	{
//		sum = sum * i;
//	}
//	printf("n的阶乘为sum=%d",sum);
//	return 0;
//}

//n的阶乘(while语句)
//#include <stdio.h>;
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int sum = 1;
//	printf("请输入一个数n=");
//	scanf("%d",&n);
//	while (i <=n)
//	{
//		sum = sum * i;
//		i++;
//	}
//	printf("n的阶乘sum=%d", sum);
//	return 0;
//}