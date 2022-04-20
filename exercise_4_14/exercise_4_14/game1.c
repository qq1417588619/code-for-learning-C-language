#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game1.h"

//initialize the board
void initBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//display the screen
void displayBoard(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %c ", board[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

//player move chess
void playermove(char board[ROW][COL], int row, int col)
{
	int X_axis=0;
	int Y_axis=0;
	while (1)
	{
		printf("player: please move the subscript of chess:");
		scanf(" %d%d", &X_axis, &Y_axis);
		if (X_axis >0 && X_axis <= row && Y_axis>0 && Y_axis <= col)
		{
			if (board[X_axis - 1][Y_axis - 1] == ' ')
			{
				board[X_axis-1][Y_axis-1] = '*';
				break;
			}
			else
			{
				printf("the position has chess, please enter again:\n");
			}
		}
		else
		{
			printf("the axis is error, please enter again!\n");
		}
	}
}

//computer move chess
void computermove(char board[ROW][COL], int row, int col)
{
	int X_axis = 0;
	int Y_axis = 0;
	printf("the computer move:\n");
	while (1)
	{
		X_axis = rand() % row;
		Y_axis = rand() % col;
		if (board[X_axis][Y_axis] == ' ')
		{
			board[X_axis][Y_axis] = '#';
			break;
		}
	}
}

int ISfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

//judge who win
char ISwin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//一行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	//一列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	//对角线
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	if (ISfull( board, row, col) == 1)
		return 'Q';
	return 'C';
}
