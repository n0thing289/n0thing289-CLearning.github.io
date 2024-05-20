#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int q = (100, 200);
	printf("%d\n", q);

	int a = 1;
	//a = a + 2;
	//a = a * a;//9
	a = (a+=2,a*a);//代码从左往右执行，把逗号后面的值赋给变量
	printf("%d", a);

	return 0;
}