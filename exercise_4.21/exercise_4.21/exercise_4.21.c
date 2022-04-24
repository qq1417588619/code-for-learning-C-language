#define _CRT_SECURE_NO_WARNINGS
//É¨À×ÓÎÏ·±àÐ´
#include <stdio.h>
#include "game1.h"
#include <time.h>
#include <stdlib.h>


void menu()
{
	printf("*****************************\n");
	printf("********0.exit  1.play*******\n");
	printf("*****************************\n");
}

void game()
{
	char broad[ROWS][COLS] = { 0 };
	char show_broad[ROWS][COLS]= { 0 };
	Initialize(broad, ROWS, COLS,' ');
	Initialize(show_broad, ROWS, COLS, ' ');
	Display(show_broad, ROW, COL);
	//set the bomb
	Setbomb(broad, ROW,COL);
	Findbomb(broad, show_broad, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("please choose :");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("please start your game!\n");
			game();
			break;
		case 0:
			printf("exit the game ,seen you !!!\n");
			break;
		default:
			printf("error, please choose again!!!\n");
			break;
		}
	}
	while (input);	
}

int main()
{
	test();
	return 0;
}