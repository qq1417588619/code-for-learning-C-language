#define _CRT_SECURE_NO_WARNINGS
//��д������С��Ϸ
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void menu()
{
	printf("***************************************\n");
	printf("********* 1.start ***** 0.exit ********\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	while(1)
	{
		printf("\n��������µ�����");
		scanf("%d", &guess);
		if (guess > ret)
			printf("�´��ˡ�");
		else if(guess<ret)
			printf("��С�ˡ�");
		else if (guess == ret)
		{
			printf("�¶��ˡ�");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("\n��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("\n");
			printf("�˳���Ϸ������");
			break;
		case 1:
			game();
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}
