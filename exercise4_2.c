#define _CRT_SECURE_NO_WARNINGS
//���ö��ַ���һ���������������е�ĳһ����
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
	printf("������ʮ������������\n");
	for(i=0;i<10;i++)
		scanf("%d", &arr[i]);
	printf("��������Ҫ���ҵ�����");
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
			printf("��Ҫ���ҵ������±�Ϊ%d", mid+1);
			break;
		}
	}	
	if(left>right)
		printf("���޴�����");
	return 0;
}