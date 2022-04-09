#define _CRT_SECURE_NO_WARNINGS
//函数的定义
void frequency(int* p)//需要改变函数外部变量时，采用传址调用
{
	(*p)++;//此处++的运算优先级比*高，所以会优先执行++，需加上括号
}
