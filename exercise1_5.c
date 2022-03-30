#define _CRT_SECURE_NO_WARNINGS
//密码输入程序(for语句)
#include <stdio.h>;
int main()
{
	int n = 0;
	int m = 0;
	int i = 0;
	int t = 3;
	int c = 0;
	printf("请设置一个六位数的数字密码：");
	scanf("%d", &n);
	for (i=0; i < t; i++)
	{   c = t - 1 - i;
		printf("请确认您的密码：");
		scanf("%d", &m);

		if (m == n)
		{
			printf("您的密码已设置成功，谢谢！");
			break;
		}
		else		
		{if(0==c)
			printf("您输入的密码不正确，请重新设置，谢谢！\n");
		else
			printf("您输入的密码不正确，您还有%d次机会，请再次输入，谢谢！\n", c);
		}
	}
	return 0;
}