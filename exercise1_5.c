#define _CRT_SECURE_NO_WARNINGS
//�����������(for���)
#include <stdio.h>;
int main()
{
	int n = 0;
	int m = 0;
	int i = 0;
	int t = 3;
	int c = 0;
	printf("������һ����λ�����������룺");
	scanf("%d", &n);
	for (i=0; i < t; i++)
	{   c = t - 1 - i;
		printf("��ȷ���������룺");
		scanf("%d", &m);

		if (m == n)
		{
			printf("�������������óɹ���лл��");
			break;
		}
		else		
		{if(0==c)
			printf("����������벻��ȷ�����������ã�лл��\n");
		else
			printf("����������벻��ȷ��������%d�λ��ᣬ���ٴ����룬лл��\n", c);
		}
	}
	return 0;
}