#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game1.h"
//#include <time.h>
//#include <stdlib.h>

//初始化数组
void Initialize(char broad[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			broad[i][j] =set;
		}
	}
}

//打印棋盘
void Display(char broad[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印纵坐标
	for (j = 0; j <=row; j++)
	{
		printf(" %d |", j);
	}
	printf("\n");
	printf("\n");
	//打印数组元素值
	for (i = 1; i <= row; i++)
	{
		printf(" %d  ", i);//打印横坐标
		//输出每行坐标的值并用|间隔
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", broad[i][j]); 
			if (j < col )
				printf("|");
		}
		printf("\n");
		//在横坐标数值下面打印间隔符号
		if(i<col)
			printf("- -|");
		else
			printf("- - ");
		for (j = 1; j <= col ; j++)
		{
			if (i < row )
			{
				if (j < col )
					printf(" - -");
				else
					printf(" - ");
			}
			else
				break;
		}
		printf("\n");
	}
}

//设置炸弹
void Setbomb(char broad[ROWS][COLS], int row, int col)
{
	int X = 0;
	int Y = 0;
	int i = 0;
	//随机设置炸弹位置
	for (i = 0; i < count; i++)
	{
		X = rand() % row+1 ;
		Y = rand() % col+1 ;
		if(broad[X][Y]==' ')
			broad[X][Y] = '*';	
	}	
}

//统计周围炸弹数量
int Count(char broad[ROWS][COLS], int x, int y)
{
	int ret = 0;
	if (broad[x - 1][y - 1] == '*' )
		ret++;
	if (broad[x - 1][y] == '*' )
		ret++;
	if (broad[x - 1][y + 1] == '*' )
		ret++;
	if (broad[x][y - 1] == '*' )
		ret++;
	if (broad[x][y] == '*')
		ret++;
	if (broad[x][y + 1] == '*' )
		ret++;
	if (broad[x + 1][y - 1] == '*')
		ret++;
	if (broad[x + 1][y] == '*')
		ret++;
	if (broad[x + 1][y + 1] == '*')
		ret++;
	return ret;
}

//扫雷
void Findbomb(char broad[ROWS][COLS], char show_broad[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while(1)
	{
		printf("please enter the AXIS:");
		scanf("%d%d", &x,&y);
	//判断输入的坐标是否合法
		if (x >=1 && x <= row && y >=1 && y <= col)//坐标合法
		{
			if (broad[x][y] == ' ')//不是炸弹时，输出周围炸弹个数
			{
				broad[x][y] = Count(broad, x, y) + '0';//一个字符型减去一个'0'可转化成整型
				show_broad[x][y] = Count(broad, x, y) + '0';
				Display(show_broad, row, col);
			}
			else
			{
				if (broad[x][y] == '*')//是炸弹时，结束游戏
				{
					printf("the bomb is exlpoding, the game over!!\n");
					Display(broad, row, col);
					break;
				}
				else//坐标已使用时，重新输入
				{
					printf("The position has been used, please enter again!!!\n");
				}
			}
		}
		else//坐标不合法，重新输入
		{
			printf("the AXIS is mistake ,please enter again!!!\n");
		}
	}
}
	


