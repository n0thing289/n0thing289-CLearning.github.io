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
	//1.����һ�������Լ�û���ȸ�ֵ��������˵��
	//2.�����������ʹ��ʱ������

	int n = 10;
	int sum = n++ + n++ + n++;
	printf("%d", sum);
}