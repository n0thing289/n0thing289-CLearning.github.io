#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int data[] = { 99, 23, 30, 10, 90, 59, 60 };
	int index = 0;
	for (int i = 0; i < sizeof(data) / sizeof(int) - 1; i++) {
		index = i;
		for (int j = i; j < sizeof(data) / sizeof(int) - 1; j++) {
			if (data[j + 1] < data[index]) {
				index = j + 1;
			}
		}
		int temp = data[i];
		data[i] = data[index];
		data[index] = temp;
	}

	for (int i = 0; i < 6; i++) {
		printf("%d\n", data[i]);
	}
}