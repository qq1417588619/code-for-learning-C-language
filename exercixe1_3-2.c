#define _CRT_SECURE_NO_WARNINGS
//ʹ�����в��ҷ��������������е�ĳ����
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
	printf("������һ����10��������ɵ��������飺\n");
	for(i=0;i<10;i++)
	   scanf("%d", &arr[i]);
	printf("��������Ҫ���ҵ�����");
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
				printf("��Ҫ�ҵ����ǵ�%d������", mid+1);
				break;
			}
	
	}
	if (left > right)
		printf("���޴���!!");
	return 0;
}