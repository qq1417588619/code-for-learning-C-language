#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>

////n�Ľ׳�
//int factorail(int num)
//{
//	if (num <= 1)
//		return 1;
//	else
//		return num * factorail(num - 1);
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("enter a num:");
//	scanf("%d", &num1);
//	num2 = factorail(num1);
//	printf("factorail of n: %d", num2);
//	return 0;
//}

//int strlen(char* arr)
// ���ַ�������
// 1.���м����
//{
//	int i = 0;
//	while (1)
//	{
//		if (*arr != '\0')
//		{
//			i++;
//			arr = arr + 1;
//		}
//		else
//			break;
//	}
//	return i;
//2.û���м����
	/*if (*arr != '\0')
		return 1 + strlen(arr + 1);
	else
		return 0;*/
		//}
		//int main()
		//{
		//	int sz = 0;
		//	char arr[] = "welcome to the world !";
		//	sz=strlen(arr);
		//	printf("the length is %d", sz);
		//	return 0;
		//}

		//�����n��쳲�������(���������)
		//1��1��2��3��5��8��13��21��34��55��89...
		//int fibonacci(int num)
		//{
		//		if (num < 3)
		//		{
		//				return 1;//ֱ�ӷ��ص�һ���͵ڶ�����
		//		}
		//		else
		//			return fibonacci(num-1)+fibonacci(num-2);//ʹ�õݹ鷵��֮�����
		//}
		//int main()
		//{
		//	int num = 0;
		//	int input = 0;
		//	printf("please enter the serail number of num which you want to check:");
		//	scanf("%d", &num);
		//	input=fibonacci(num);
		//	printf("the number is : %d", input);
		//	return 0;
		//}

//��ŵ�����⣨�ݹ飩(���������)
#include <stdio.h>
void move(char X, char Y)
{
	static int i = 0;
	i++;
	printf("%d:  %c>>>%c \n",i, X, Y);
}
void hanoi(int num,char S1,char S2,char S3)
{
		if (num == 1)
		{
			move(S1, S3);
		}
		else
		{
			hanoi(num - 1, S1, S3, S2);
			move(S1,S3);
			hanoi(num - 1, S2, S1, S3);
		}
}

int main()
{
	
	int num=0;
	int num1 = 0;
	printf("please enter the floor number of hanoi:  ");
	scanf("%d",&num);
	/*printf("the number of you need to move is: %d", hanoi(num));*/
	printf("the step of moving are:\n");
	hanoi(num,'A','B','C');
	return 0;
}

//#include <stdio.h>
//
//void move(char x, char y) 
//{
//	printf("%c->%c\n", x, y);
//}
//void abc(int m, char a, char b, char c)
//{
//	if (m == 1)
//		move(a, c);
//	else 
//	{
//		abc(m - 1, a, c, b);
//		move(a, c);
//        abc(m - 1, b, a, c);
//	}
//}
//
//int main() 
//{
//	int x;
//	scanf("%d", &x);
//	abc(x, 'A', 'B', 'C');
//	return 0;
//}


