#define _CRT_SECURE_NO_WARNINGS
//大小端存储模式判断
#include <stdio.h>
int check_model()
{
	int a = 0x11223344;
	char* p = (char*)(&a);
	//大端返回 1；小端返回 0；
	if (0x11 == *p)
		return 1;
	else
	    return 0;
}
int main()
{
	int ret = check_model();
	if (1 == ret)
		printf("该模式为大端存储模式");
	else
		printf("该模式为小端存储模式");
	return 0;
}