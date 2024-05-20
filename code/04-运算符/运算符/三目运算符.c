#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int sum = 250;

	//1. 
	sum > 200 ? sum *= 0.7 : printf("²»ÄÜ´òÕÛ");
	//printf("%d", sum);

	//2.
	sum = sum > 200 ? sum * 0.7 : 0;
	printf("%d", sum);
	return 0;
}