#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	int myNum;
	printf("请输入一个数:");
	scanf("%d", &myNum);

	int isPrime = true;
	int i;
	/*for (i = 2; i <= myNum/2;i++) {
		if (myNum % i == 0) {
			isPrime = false;
			break;
		}
		
	}
	if (isPrime) {
		printf("%d 是质数", myNum);
	}
	else {
		printf("%d 不是质数", myNum);
		}
	*/

	for (i = 2; i <= myNum / 2; i++) {
		if (myNum % i == 0) {
			break;
		}
	}
	if (i <= myNum / 2) {
		printf("%d不是质数", myNum);
	}
	else {
		printf("%d是质数",myNum);
	}

}