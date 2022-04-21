#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//函数的应用：定义函数实现数组的初始化，打印以及内容倒置

//初始化数组
void init(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i]=0;
	}
}

//打印数组
void Myprintf(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//倒置数组内容
void reverse(int arr[],int sz)
{
	int left=0;
	int right = sz-1;
	int temp = 0;
	int i = 0;
	while (left < right)
	{
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] ;
	int i = 0;
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	printf("please enter a array which has 10 number:\n");
	for (i = 0; i < sz; i++)
	{
		scanf("%d ", &arr[i]);
	}
	/*init(arr,sz);
	Myprintf(arr,sz);*/
	reverse(arr,sz);
	Myprintf(arr, sz);
	return 0;
}