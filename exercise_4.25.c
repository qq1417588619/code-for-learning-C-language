#define _CRT_SECURE_NO_WARNINGS
//��С�˴洢ģʽ�ж�
#include <stdio.h>
int check_model()
{
	int a = 0x11223344;
	char* p = (char*)(&a);
	//��˷��� 1��С�˷��� 0��
	if (0x11 == *p)
		return 1;
	else
	    return 0;
}
int main()
{
	int ret = check_model();
	if (1 == ret)
		printf("��ģʽΪ��˴洢ģʽ");
	else
		printf("��ģʽΪС�˴洢ģʽ");
	return 0;
}