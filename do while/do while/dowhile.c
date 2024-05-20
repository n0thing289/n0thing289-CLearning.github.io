#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 1;
	do {
		printf("%d", n);
	} while (n > 1);

	//
	
	int score = 0;
	do {
		printf("请输入分数：");
		scanf("%d", &score);
	} while (score > 100);
	int flag = 1;//1 代表true
	while (flag) {
		if (score != -1) {
			switch (score / 10) {
			case 10:
			case 9:
				printf("A");
				break;
			case 8:
			case 7:
				printf("B");
				break;
			case 6:
			case 5:
				printf("C");
				break;
			default:
				printf("D");
			}
		}
		else {
			flag = 0;//0代表false
		}

	}
}