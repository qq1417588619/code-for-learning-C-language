#define _CRT_SECURE_NO_WARNINGS
//输出“welcome to the world”(每次输出停留1s后清屏);
#include <stdio.h>;
#include <windows.h>;
#include <string.h>;
#include <stdlib.h>;
int main()
{
	char arr[] = "welcome to the world";
	char arr1[] = "********************";
	int left1 = 0;
	int right1 = 0;
	int left = 0;
	int right = 0;
	/*sz = sizeof(arr) / sizeof(arr[0]);
	right = sz - 2;*/
	right = strlen(arr) - 1;
	while (left <= right)
	{
		arr1[left] = arr[left];
		arr1[right] = arr[right];
		printf("%s\n", arr1);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	printf("%s", arr1);
	return 0;
}
////输出“welcome to the world”(每次输出停留1s);
//#include <stdio.h>;
//#include <windows.h>;
//#include <string.h>;
//int main()
//{
//	char arr[] = "welcome to the world";
//	char arr1[] = "********************";
//	int left1 = 0;
//	int right1 = 0;
//	int left = 0;
//	int right = 0;
//	/*sz = sizeof(arr) / sizeof(arr[0]);
//	right = sz - 2;*/
//	right = strlen(arr) - 1;
//	while (left <= right)
//	{
//	arr1[left] = arr[left];
//    arr1[right] = arr[right];
//    printf("%s\n",arr1);
//	Sleep(1000);
//    left++;
//    right--;
//    }
//   return 0;
//}
////输出“welcome to the world”;
//#include <stdio.h>;
//int main()
//{
//	char arr[] = "welcome to the world";
//	char arr1[] = "********************";
//	int i = 0;
//	int left1 = 0;
//	int right1 = 0;
//	int left = 0;
//	int right = 0;
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	right = sz - 2;
//	while (left <= right)
//	{
//	arr1[left] = arr[left];
//    arr1[right] = arr[right];
//    printf("%s\n",arr1);
//    left++;
//    right--;
//    }
//   return 0;
//}