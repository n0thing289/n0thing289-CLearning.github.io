#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int q = (100, 200);
	printf("%d\n", q);

	int a = 1;
	//a = a + 2;
	//a = a * a;//9
	a = (a+=2,a*a);//�����������ִ�У��Ѷ��ź����ֵ��������
	printf("%d", a);

	return 0;
}