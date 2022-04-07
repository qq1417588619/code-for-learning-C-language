#define _CRT_SECURE_NO_WARNINGS
//编写猜数字小游戏
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
		printf("\n请输入你猜的数：");
		scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了。");
		else if(guess<ret)
			printf("猜小了。");
		else if (guess == ret)
		{
			printf("猜对了。");
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
		printf("\n请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("\n");
			printf("退出游戏！！！");
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
