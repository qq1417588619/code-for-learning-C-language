#define _CRT_SECURE_NO_WARNINGS
//�������в���ĳһ���ض�������
#include <stdio.h>;
int main()
{
	int m[10];
	int i = 0;
	int n = 0;
	int t = 0;
	int a = 0;
	printf("������ʮ��������");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &m[i]);
	}
	printf("��������Ҫ���ҵ�����");
	scanf("%d", &n);
	for (t = 0; t < 10; t++)
	{
		if (n == m[t])
		printf("�����ҵ���%d�ǵ�%d����;\n", n, t + 1);
	}
	return 0;
}