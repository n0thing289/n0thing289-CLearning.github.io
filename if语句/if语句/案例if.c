#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int input = 90;
	scanf("%d", &input);//�����߽�
	if (input % 2 == 0) {//1������һ��д��
		printf("%d��ż��", input);
	}
	else {
		printf("%d������", input);
	}

	////////////////////////////////////
	int score;
	printf("����2-������ɼ���");
	scanf("%d", &score);
	if (score >= 90 && score <= 100) {
		printf("A");
	}
	else if (score >= 80) {
		printf("B");
	}
	else if (score >= 70) {
		printf("C");
	}
	else if (score >= 70) {
		printf("D");
	}
	else {
		printf("E");
	}

	/////////////////////////////////////
	int year;
	printf("����3-�ж�����-����һ����ݣ�");
	scanf("%d", &year);
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		printf("����");
	}
	else {
		printf("��������");
	}
}