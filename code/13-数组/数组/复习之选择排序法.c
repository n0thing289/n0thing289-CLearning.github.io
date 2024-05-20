#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main11() {
	int data[] = { 9, 18, 38, 2, 46, 8, 43, 46, 5, 12 };
	
	for (int i = 0; i < sizeof(data) / sizeof(int);i++) {
		int index = i;
		for (int j = i; j < sizeof(data) / sizeof(int); j++){
			if (data[j + 1] < data[index]) {
				index = j+1;
			}
		}

		int temp = data[index];
		data[index] = data[i];
		data[i] = temp;

	}

	for (int i = 0; i < sizeof(data) / sizeof(int); i++) {
		printf("%d\n", data[i]);
	}
}