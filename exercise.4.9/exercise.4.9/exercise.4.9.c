#define _CRT_SECURE_NO_WARNINGS
//函数的递归与迭代
//接受一个整数型函数，一次打印它的每一位
#include <stdio.h>

void print(int num)
{
	if (num > 9)
	{
	    print(num/10);
	}
	printf("%d ", num%10);
}

int main()
{
	int num = 0;
	printf("please enter a num:");
	scanf("%d", &num);
	print((num));
	return 0;
}

//编写一个函数调用一次就记录一次
//#include <stdio.h>
//void frequency(int* p)//需要改变函数外部变量时，采用传址调用
//{
//	(* p)++;//此处++的运算优先级比*高，所以会优先执行++，需加上括号
//}
//#include "test.h"//此处为函数的声明
//int main()
//{
//	int num = 0;
//	frequency(&num);
//	printf("num=%d\n", num);
//	frequency(&num);
//	printf("num=%d\n", num);
//	frequency(&num);
//	printf("num=%d\n", num);
//	return 0;
//}
