#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3

#include <time.h>
#include <stdlib.h>

void displayBoard(char board[ROW][COL], int row, int col);
void initBoard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);
char ISwin(char board[ROW][COL], int row, int col);
int ISfull(char board[ROW][COL], int row, int col);