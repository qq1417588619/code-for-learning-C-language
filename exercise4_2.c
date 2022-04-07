#define _CRT_SECURE_NO_WARNINGS
//利用二分法查一个整数有序数组中的某一个数
#include <stdio.h>
int main()
{
	int i = 0;
	int arr[10];
	int left = 0;
	int right = 0;
	int mid = 0;
	int input = 0;
	right = (sizeof(arr) / sizeof(arr[0])) - 1;
	printf("请输入十个有序整数：\n");
	for(i=0;i<10;i++)
		scanf("%d", &arr[i]);
	printf("请输入你要查找的数：");
	scanf("%d", &input);
	while (left <=right)
	{
		mid = (left + right)/2;
		if (input < arr[mid])
		{
			right = mid-1;
		}
		else if (input > arr[mid])
		{
			left =mid+1;
		}
		else
		{
			printf("您要查找的数的下标为%d", mid+1);
			break;
		}
	}	
	if(left>right)
		printf("查无此数。");
	return 0;
}