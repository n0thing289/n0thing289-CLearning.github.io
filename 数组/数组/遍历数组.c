#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main2() {
	int weight[5];
	//获取数组长度
	int length = sizeof(weight) / sizeof(int);
	printf("%d\n", length);
	//给数组赋值
	for (int i = 0; i < 5; i++) {
		weight[i] = 100 + i;
	}
	//输出数组
	for (int i = 0; i < length; i++) {
		printf("%d\t", weight[i]);
	}
}