#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	int flag = 1;//1 ����true
	while (flag) {
		int score = 0;
		
		printf("�����������");
		scanf("%d", &score);
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
			flag = 0;//0����false
		}
		
	}
	
}