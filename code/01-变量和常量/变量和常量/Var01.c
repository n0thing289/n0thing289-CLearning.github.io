#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//1. 常量有什么型常量之分，浮点型常量3.14默认是double类型，
	//2. 变量的定义：先声明数据类型，赋对应数据类型的值
	int a = 10;
	int b = 20;
	a = 99;
	printf("hello world %d", a + b);
	return 0;
}