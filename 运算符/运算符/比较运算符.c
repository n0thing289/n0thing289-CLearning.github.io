#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	//1. true--1, false--0
	//2. �Ƚ��������javaһ�����﷨
	//3. c�������ڣ�c89��û�в�������,c99�������������ͣ���Ҫ����<stdbool.h>��
	int a = 28;
	printf("%d", a > 10);
	if (1) {
		printf("yes");
	}

	bool isMath = true;
	printf("%d", isMath);//��ӡ��ռλ��ͦ�鷳�ģ�%d %f %u %s %o
	return 0;
}