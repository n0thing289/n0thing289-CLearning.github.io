#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int count = 0;
	for (int i = 0; i < 3000;i++) {
		if (i % 400 == 0 || i % 4 == 0 && i % 100 != 0) {
			printf("%d ", i);
			count++;
			if (count % 4 == 0) {
				printf("\n");
			}
		}
	}
}