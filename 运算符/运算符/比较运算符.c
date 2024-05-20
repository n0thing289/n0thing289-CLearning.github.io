#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	//1. true--1, false--0
	//2. 比较运算符和java一样的语法
	//3. c语言早期（c89）没有布尔类型,c99才新增布尔类型（需要引入<stdbool.h>）
	int a = 28;
	printf("%d", a > 10);
	if (1) {
		printf("yes");
	}

	bool isMath = true;
	printf("%d", isMath);//打印的占位符挺麻烦的，%d %f %u %s %o
	return 0;
}