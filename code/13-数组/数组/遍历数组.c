#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main2() {
	int weight[5];
	//��ȡ���鳤��
	int length = sizeof(weight) / sizeof(int);
	printf("%d\n", length);
	//�����鸳ֵ
	for (int i = 0; i < 5; i++) {
		weight[i] = 100 + i;
	}
	//�������
	for (int i = 0; i < length; i++) {
		printf("%d\t", weight[i]);
	}
}