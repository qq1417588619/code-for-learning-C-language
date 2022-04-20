#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game1.h"
void menu()
{
	printf("****************************************\n");
	printf("***********1.enter    0.exit************\n");
	printf("****************************************\n");
}
void game()
{
	char ret = '0';
	char board[ROW][COL] = { 0 };
	//≥ı ºªØ∆Â≈Ã
	initBoard(board, ROW, COL);
	displayBoard(board,ROW,COL);
	while (1)
	{
		//ÕÊº“œ¬∆Â
		playermove(board, ROW, COL);
		displayBoard(board, ROW, COL);
		//≈–∂œ ‰”Æ
		ret=ISwin(board, ROW, COL);
		if (ret != 'C')
			break;
		//µÁƒ‘œ¬∆Â
		computermove(board, ROW, COL);
		displayBoard(board, ROW, COL);
		ret = ISwin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	//*:player win;
	//#£∫computer win;
	//Q:draw;
	//C:continue
	if (ret == '*')
	{
		printf("player win !!!\n");
	}
	else
		if (ret == '#')
		{
			printf("computer win !!!\n");
		}
		else
			if (ret == 'Q')
		    {
			printf("draw !!!\n");
		    }
}
void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("please choose: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("please start the game!\n");
			game();
			break;
		case 0:
			printf("exit the game!\n");
			break;
		default:
			printf("error, please enter again: \n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	//printf("please choose(enter the number 1 or 0 )");
	return 0;
}