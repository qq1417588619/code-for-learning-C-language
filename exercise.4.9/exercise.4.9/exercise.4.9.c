#define _CRT_SECURE_NO_WARNINGS
//�����ĵݹ������
//����һ�������ͺ�����һ�δ�ӡ����ÿһλ
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

//��дһ����������һ�ξͼ�¼һ��
//#include <stdio.h>
//void frequency(int* p)//��Ҫ�ı亯���ⲿ����ʱ�����ô�ַ����
//{
//	(* p)++;//�˴�++���������ȼ���*�ߣ����Ի�����ִ��++�����������
//}
//#include "test.h"//�˴�Ϊ����������
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
