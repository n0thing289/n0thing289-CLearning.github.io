#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	int myNum;
	printf("������һ����:");
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
		printf("%d ������", myNum);
	}
	else {
		printf("%d ��������", myNum);
		}
	*/

	for (i = 2; i <= myNum / 2; i++) {
		if (myNum % i == 0) {
			break;
		}
	}
	if (i <= myNum / 2) {
		printf("%d��������", myNum);
	}
	else {
		printf("%d������",myNum);
	}

}