#define _CRT_SECURE_NO_WARNINGS
//使用折中查找法查找有序数组中的某个数
#include <stdio.h>;
int main()
{
	int i = 0;
	int arr[10];
	int left = 0;
	int right = 0;
	int sz = 0;
	int mid = 0;
	int n = 0;
	sz = sizeof(arr) /sizeof(arr[0]);
	right = sz - 1;
	printf("请输入一个由10个整数组成的有序数组：\n");
	for(i=0;i<10;i++)
	   scanf("%d", &arr[i]);
	printf("请输入您要查找的数：");
	scanf("%d", &n);
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > n)
			right = mid - 1;
		else
			if (arr[mid] < n)
				left = mid + 1;
			else
			{
				printf("您要找的数是第%d个数。", mid+1);
				break;
			}
	
	}
	if (left > right)
		printf("查无此数!!");
	return 0;
}