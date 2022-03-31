#define _CRT_SECURE_NO_WARNINGS
//用while语句编写密码输入程序
#include <stdio.h>;
int main()
{
	int i = 0;
	int t = 0;
	int m = 0;
	int n = 0;
	printf("请设置一个六位数的密码：\n");
	scanf("%d", &n);
	printf("请确认您的密码：\n");
	scanf("%d", &m);
	while (i < 3)
	{
		if (m == n)
		{
			printf("您的密码已设置完成，谢谢！\n");
			break;
		}
		else
		{
			if (i < 2)
			{
				printf("您还有%d次机会，请重新输入您的密码：\n", 2 - i);
				scanf("%d", &m);
			}
		}
		i++;
	}
	printf("您的使用次数已用完，请重新设置。");
	return 0;
}