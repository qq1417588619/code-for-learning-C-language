#define _CRT_SECURE_NO_WARNINGS
//���9*9�˷��ھ���
#include <stdio.h>
int main()
{
	int i = 0;
	int t = 0;
	int sum = 0;
	for (i = 1; i < 10; i++)
	{
		for (t = 1; t <=i; t++)
		{
			sum = i * t;
			printf("%d*%d=%d  ", t, i, sum);
			//����ʱ�˴��ɸ�дΪ��printf("%d*%d=%-2d",t,i,sum);��������sum������뻹���Ҷ��뼸λ����
		}
		printf("\n");
	}
	return 0;
}

////��ʮ�����������ֵ
//#include <stdio.h>
//int main()
//{
////�˴�ֱ�ӳ�ʼ����	int n=0;
//	int m[10] ;
//	int i = 0;
//	printf("������10������:\n");
//	for (i = 0; i <10; i++)
//	{
//		printf("����ĵ�%d����Ϊ��",i+1);
//		scanf("%d", &m[i]);
//
//	}
//	n = m[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (n <= m[i])
//			n = m[i];
//	}
//	printf("ʮ�����е����ֵΪ��%d", n);
//	return 0;
//}

////�������-�������Ϊ1,��ĸ���ε�����100�ķ����ĺͣ�
//// 1��ʹ��pow����
//#include <stdio.h>
//#include <math.h>;
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	double  n = 0.0;
//	double  m = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		m = pow(-1.0, i + 1.0);
//		n =m/i;
//		sum = sum + n;
//	}
//	printf("���յĺ�Ϊ%lf", sum);
//	return 0;
//}

//2��ֱ�������߼�ȷ������
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	double n = 0.0;
//	int t = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		n = 1.0 / i;
//		sum =sum+(t*n);
//		t = -t;
//	}
//	printf("���յĺ�Ϊ%lf", sum);
//	return 0;
//}

////��дһ������ͳ��1-100�������г���9�ĸ�����
//#include <stdio.h>
//int main()
//{ 
//	int n = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if(i%10==9)
//		{
//			printf("%d ", i);
//			n++;
//		}
//		if (i/10 == 9)
//		{
//			printf("%d ", i);
//			n++;
//		}
//	}
//	printf("\n����9�ĸ���Ϊ%d", n);
//	return 0;
//}