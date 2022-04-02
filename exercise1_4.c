#define _CRT_SECURE_NO_WARNINGS
//Êä³ö¡°welcome to the world¡±;
#include <stdio.h>;
int main()
{
	char arr[] = "welcome to the world";
	char arr1[] = "********************";
	int i = 0;
	int left1 = 0;
	int right1 = 0;
	int left = 0;
	int right = 0;
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	right = sz - 2;
	while (left <= right)
	{
	arr1[left] = arr[left];
    arr1[right] = arr[right];
    printf("%s\n",arr1);
    left++;
    right--;
    }
   return 0;
}