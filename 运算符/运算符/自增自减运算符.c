#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 0;
	a++;
	++a;
	a--;
	--a;

	int b = 1;
	b = a++;
	printf("%d\n", b);
	b = ++a;
	printf("%d\n", b);
	//1.单独一句自增自减没有先赋值再自增减说法
	//2.放在其他语句使用时，则有

	int n = 10;
	int sum = n++ + n++ + n++;
	printf("%d", sum);
}