#define _CRT_SECURE_NO_WARNINGS
//n�Ľ׳ˣ�do...while��䣩
#include <stdio.h>;
int main()
{
	int i = 0;
	int n = 0;
	int sum = 1;
	printf("������һ������n,n=");
	scanf("%d", &n);
	do
	{
		i++;
		sum = sum * i;
	}
	while (i < n);
	printf("n�Ľ׳�sum=%d", sum);
	return 0;
}

//n�Ľ׳ˣ�for��䣩
//#include <stdio.h>;
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	printf("������һ������n��n=");
//	scanf("%d", &n);
//	for (i = 1; i < (n + 1); i++)
//	{
//		sum = sum * i;
//	}
//	printf("n�Ľ׳�Ϊsum=%d",sum);
//	return 0;
//}

//n�Ľ׳�(while���)
//#include <stdio.h>;
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int sum = 1;
//	printf("������һ����n=");
//	scanf("%d",&n);
//	while (i <=n)
//	{
//		sum = sum * i;
//		i++;
//	}
//	printf("n�Ľ׳�sum=%d", sum);
//	return 0;
//}