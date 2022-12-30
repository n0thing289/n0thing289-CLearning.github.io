#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include"声明函数.h"

//声明语法--"关键字 函数名();"
// 1. 在外部程序定义了函数，在本程序用extern 声明那个函数extern void _print();
// 2. 在头文件定义函数，在本程序导入#include"headfile.h"
// 3. 在本文件定义函数，在main()之前声明
//void _print();
int main(){

	_print();
	return 0;
}


//void _print() {
//	printf("hello world");
//}