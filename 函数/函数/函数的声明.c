#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
//#include"声明函数.h"

//声明语法--"关键字 函数名();" 或者 "返回类型 函数名 形参列表;"
// 1. 在外部程序定义了函数，在本程序用extern 声明那个函数extern void _print();
// 2. 在头文件定义函数，在本程序导入#include"headfile.h"
// 3. 在本文件定义函数，在main()之前声明或者定义好： 返回类型 函数名 形参列表；
//void _print();
void _print();
extern bool isBool(int a);
//extern void _print();
int main(){

	_print();
	//isBool(100);
	return 0;
}


void _print() {
	printf("_print函数被调用");
}