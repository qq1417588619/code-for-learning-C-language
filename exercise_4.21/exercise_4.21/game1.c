#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game1.h"
//#include <time.h>
//#include <stdlib.h>

//��ʼ������
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

//��ӡ����
void Display(char broad[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ������
	for (j = 0; j <=row; j++)
	{
		printf(" %d |", j);
	}
	printf("\n");
	printf("\n");
	//��ӡ����Ԫ��ֵ
	for (i = 1; i <= row; i++)
	{
		printf(" %d  ", i);//��ӡ������
		//���ÿ�������ֵ����|���
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", broad[i][j]); 
			if (j < col )
				printf("|");
		}
		printf("\n");
		//�ں�������ֵ�����ӡ�������
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

//����ը��
void Setbomb(char broad[ROWS][COLS], int row, int col)
{
	int X = 0;
	int Y = 0;
	int i = 0;
	//�������ը��λ��
	for (i = 0; i < count; i++)
	{
		X = rand() % row+1 ;
		Y = rand() % col+1 ;
		if(broad[X][Y]==' ')
			broad[X][Y] = '*';	
	}	
}

//ͳ����Χը������
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

//ɨ��
void Findbomb(char broad[ROWS][COLS], char show_broad[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while(1)
	{
		printf("please enter the AXIS:");
		scanf("%d%d", &x,&y);
	//�ж�����������Ƿ�Ϸ�
		if (x >=1 && x <= row && y >=1 && y <= col)//����Ϸ�
		{
			if (broad[x][y] == ' ')//����ը��ʱ�������Χը������
			{
				broad[x][y] = Count(broad, x, y) + '0';//һ���ַ��ͼ�ȥһ��'0'��ת��������
				show_broad[x][y] = Count(broad, x, y) + '0';
				Display(show_broad, row, col);
			}
			else
			{
				if (broad[x][y] == '*')//��ը��ʱ��������Ϸ
				{
					printf("the bomb is exlpoding, the game over!!\n");
					Display(broad, row, col);
					break;
				}
				else//������ʹ��ʱ����������
				{
					printf("The position has been used, please enter again!!!\n");
				}
			}
		}
		else//���겻�Ϸ�����������
		{
			printf("the AXIS is mistake ,please enter again!!!\n");
		}
	}
}
	


