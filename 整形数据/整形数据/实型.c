#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int price = 11;
	int totalPrice = price * 0.7; //从“double”转换到“int”，可能丢失数据
	printf("totalPrice = %d\n", totalPrice);


	float ftotalPrice = price * 0.7; //从“double”转换到“float”，可能丢失数据
	double dtotalPrice = price * 0.7;
	//printf("ftotalPrice = %d\n", ftotalPrice);

	printf("ftotalPrice = %f\n", ftotalPrice);
	printf("ftotalPrice = %lf\n", dtotalPrice);

	return 0;
}