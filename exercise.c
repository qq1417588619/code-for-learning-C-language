#define _CRT_SECURE_NO_WARNINGS
//�����������Ľ׳˵ĺ�
//1�������㷨
//#include <stdio.h>;
//int main()
//{
//	int i = 0;
//	int t = 0;
//	int sum = 0;
//	int sum1 = 1;
//	int n = 0;
//	printf("������һ������n:");
//	scanf("%d", &n);
//	for (i = 1; i < (n + 1); i++)
//	{
//		for (t = 1; t <=i; t++)
//		{
//			sum1 = sum1 * t;
//		}
//		sum = sum + sum1;
//		sum1 = 1;
//	}
//	printf("���Ϊ%d", sum);
//	return 0;
//}

//2�����ú������
#include <stdio.h>;
int main()
{
	int i = 0;
	int sum1 = 0;
	int n = 0;
	printf("������һ������n:");
	scanf("%d", &n);
	for (i = 1; i < (n + 1); i++)
		sum1 =sum1 + sum(i);
	printf("���Ϊ%d", sum1);
	return 0;
}
int sum(int x)
{
	int t = 0;
	int y = 1;
	for (t = 1; t < (x + 1); t++)
		y = y * t;
	return y;
}