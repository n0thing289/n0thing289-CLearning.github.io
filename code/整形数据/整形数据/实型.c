#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int price = 11;
	int totalPrice = price * 0.7; //�ӡ�double��ת������int�������ܶ�ʧ����
	printf("totalPrice = %d\n", totalPrice);


	float ftotalPrice = price * 0.7; //�ӡ�double��ת������float�������ܶ�ʧ����
	double dtotalPrice = price * 0.7;
	//printf("ftotalPrice = %d\n", ftotalPrice);

	printf("ftotalPrice = %f\n", ftotalPrice);
	printf("ftotalPrice = %lf\n", dtotalPrice);

	return 0;
}