#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

//1. 定义函数
n0thing_printf(int max) {//2.传参
	printf("**********");
	printf("\nhwk\n");
	printf("**********");

	for (int i = 1; i <= max; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d * %d = %d\t", j, i, i * j);
		}
		printf("\n");
	}
}

int sum(int x, int y, int z) {//3. 返回值，规范
	int sum = x + y + z;
	return sum;
}

bool isBool() {
	return true;
}

int main() {
	n0thing_printf(6);
	n0thing_printf(7);
	n0thing_printf(8);

	printf("%d", sum(1,2,3));
}