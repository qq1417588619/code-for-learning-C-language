#define _CRT_SECURE_NO_WARNINGS
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define count 10
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include <time.h>
void Initialize(char broad[ROWS][COLS], int row, int col,char set);
void Display(char broad[ROWS][COLS], int row, int col);
void Setbomb(char broad[ROWS][COLS], int row, int col);
void Findbomb(char broad[ROWS][COLS], char show_broad[ROW + 2][COL + 2],int row, int col);
int Count(char broad[ROWS][COLS], int x, int y);