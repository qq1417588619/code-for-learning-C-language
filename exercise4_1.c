#define _CRT_SECURE_NO_WARNINGS
//输出9*9乘法口诀表
#include <stdio.h>
int main()
{
	int i = 0;
	int t = 0;
	int sum = 0;
	for (i = 1; i < 10; i++)
	{
		for (t = 1; t <=i; t++)
		{
			sum = i * t;
			printf("%d*%d=%d  ", t, i, sum);
			//完善时此处可改写为“printf("%d*%d=%-2d",t,i,sum);”即控制sum是左对齐还是右对齐几位数；
		}
		printf("\n");
	}
	return 0;
}

////求十个整数的最大值
//#include <stdio.h>
//int main()
//{
////此处直接初始定义	int n=0;
//	int m[10] ;
//	int i = 0;
//	printf("请输入10个整数:\n");
//	for (i = 0; i <10; i++)
//	{
//		printf("输入的第%d个数为：",i+1);
//		scanf("%d", &m[i]);
//
//	}
//	n = m[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (n <= m[i])
//			n = m[i];
//	}
//	printf("十个数中的最大值为：%d", n);
//	return 0;
//}

////分数求和-计算分子为1,分母依次递增至100的分数的和：
//// 1、使用pow函数
//#include <stdio.h>
//#include <math.h>;
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	double  n = 0.0;
//	double  m = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		m = pow(-1.0, i + 1.0);
//		n =m/i;
//		sum = sum + n;
//	}
//	printf("最终的和为%lf", sum);
//	return 0;
//}

//2、直接运用逻辑确定正负
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	double n = 0.0;
//	int t = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		n = 1.0 / i;
//		sum =sum+(t*n);
//		t = -t;
//	}
//	printf("最终的和为%lf", sum);
//	return 0;
//}

////编写一个程序统计1-100的整数中出现9的个数：
//#include <stdio.h>
//int main()
//{ 
//	int n = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if(i%10==9)
//		{
//			printf("%d ", i);
//			n++;
//		}
//		if (i/10 == 9)
//		{
//			printf("%d ", i);
//			n++;
//		}
//	}
//	printf("\n出现9的个数为%d", n);
//	return 0;
//}