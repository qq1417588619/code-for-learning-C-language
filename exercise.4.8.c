#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�����壺�ж�һ�����Ƿ�Ϊ����
void ss(int x)
{
	int i = 0;
	for (i = 2; i < x; i++)
	{
		if(x % i == 0 )
		{
			printf("%d��������\n", x);
			break;
		}
	}
	if (i == x)
	{
		printf("%d������\n", x);
	}
}

//�ж�ĳһ���ǲ�������
void year(int x)
{
	if (x % 4 == 0 && x % 100 != 0)
		printf("%d��������\n", x);
	else if (x % 400 == 0)
		printf("%d��������\n", x);
	else
		printf("%d�겻������\n", x);
}

//һ��������������Ķ��ֲ���
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
		    printf("�����ҵ���%d�ǵ�%d������\n", x, mid + 1);
		    break;
	    }	
	}
	if (left >= right)
	{
		printf("���޴�����\n");
	}
}

int main()
{
	//�ж��Ƿ�Ϊ������
	int a = 0;
	printf("������Ҫ�жϵ�����");
	scanf("%d", &a);
	ss(a);
	//�ж�ĳһ���ǲ������ꣻ
	int b = 0;
	printf("������Ҫ�����ݣ�");
	scanf("%d", &b);
	year(b);
	//�ö��ַ�������
	int c = 0;
	printf("������Ҫ���ҵ���:");
	scanf("%d", &c);
	EF(c);
	return 0;
}