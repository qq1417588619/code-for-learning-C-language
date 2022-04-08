#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//函数体：判断一个数是否为素数
void ss(int x)
{
	int i = 0;
	for (i = 2; i < x; i++)
	{
		if(x % i == 0 )
		{
			printf("%d不是素数\n", x);
			break;
		}
	}
	if (i == x)
	{
		printf("%d是素数\n", x);
	}
}

//判断某一年是不是闰年
void year(int x)
{
	if (x % 4 == 0 && x % 100 != 0)
		printf("%d年是闰年\n", x);
	else if (x % 400 == 0)
		printf("%d年是闰年\n", x);
	else
		printf("%d年不是闰年\n", x);
}

//一个整型有序数组的二分查找
void EF(int x)
{
	int left = 0;
	int right = 0;
	int mid = 0;
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	right = sz - 1;
	while (left < right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < x)
		{
			left = mid + 1;
		}
		else if (arr[mid] > x)
		{
			right = mid - 1;
		}
		else if (arr[mid] == x)
		{
		    printf("您查找的数%d是第%d个数。\n", x, mid + 1);
		    break;
	    }	
	}
	if (left >= right)
	{
		printf("查无此数！\n");
	}
}

int main()
{
	//判断是否为素数；
	int a = 0;
	printf("请输入要判断的数：");
	scanf("%d", &a);
	ss(a);
	//判断某一年是不是闰年；
	int b = 0;
	printf("请输入要查的年份：");
	scanf("%d", &b);
	year(b);
	//用二分法查数字
	int c = 0;
	printf("请输入要查找的数:");
	scanf("%d", &c);
	EF(c);
	return 0;
}