#define _CRT_SECURE_NO_WARNINGS
//��while����д�����������
#include <stdio.h>;
int main()
{
	int i = 0;
	int t = 0;
	int m = 0;
	int n = 0;
	printf("������һ����λ�������룺\n");
	scanf("%d", &n);
	printf("��ȷ���������룺\n");
	scanf("%d", &m);
	while (i < 3)
	{
		if (m == n)
		{
			printf("����������������ɣ�лл��\n");
			break;
		}
		else
		{
			if (i < 2)
			{
				printf("������%d�λ��ᣬ�����������������룺\n", 2 - i);
				scanf("%d", &m);
			}
		}
		i++;
	}
	printf("����ʹ�ô��������꣬���������á�");
	return 0;
}