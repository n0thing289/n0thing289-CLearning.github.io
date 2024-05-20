#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int sum = 0;
	int n = 1;
	while (n <= 100) {
		sum += n;
		n++;
	}
	printf("%d", sum);

	//5! 5 x 4 x 3 x 2 x 1 
	int num = 5;
	int sum2 = 1;
	while (num >= 1) {
		sum2 *= num;
		num--;
	}
	printf("%d", sum2);
	
}